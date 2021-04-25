#include <iostream>
#include <string>
#include "PlateauEchec.h"
#include "ui_PlateauEchec.h"
#include <QTableWidget>
#include <QMessageBox>
#include <QPixmap>
#include <QLabel>


Plateau::PlateauEchec::PlateauEchec(QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::PlateauEchec)
{
	ui->setupUi(this);

	connect(ui->tableWidget, SIGNAL(cellClicked(int, int)), this, SLOT(mouvement(int, int)));

	initialisationFenetre();

}

void Plateau::PlateauEchec::initialisationFenetre() {

	ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui->tableWidget->verticalHeader()->setFixedWidth(25);
	ui->tableWidget->horizontalHeader()->setFixedHeight(35);

	int tailleHorizontaleListeBlanche = ui->listeBlanche->horizontalHeader()->length();
	auto tailleVerticaleListeBlanche = ui->listeBlanche->verticalHeader()->length();

	ui->listeBlanche->setMaximumWidth(tailleHorizontaleListeBlanche);
	ui->listeBlanche->setMaximumHeight(tailleVerticaleListeBlanche);

	auto tailleHorizontaleListeNoire = ui->listeNoire->horizontalHeader()->length();
	auto tailleVerticaleListeNoire = ui->listeNoire->verticalHeader()->length();

	ui->listeNoire->setMaximumWidth(tailleHorizontaleListeNoire);
	ui->listeNoire->setMaximumHeight(tailleVerticaleListeNoire);

	ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
	ui->resetButton->setStyleSheet("background : rgba(94,94,94)");



	ui->listeBlanche->setIconSize(QSize(25, 25));
	ui->listeNoire->setIconSize(QSize(25, 25));

	ui->tourRole->setText("Tour : BLANC");

	

	

	


}


void Plateau::PlateauEchec::resizeEvent(QResizeEvent* event)
{

	int tailleHorizontaleTableWidget = ui->tableWidget->horizontalHeader()->sectionSize(0);
	int tailleVerticaleTableWidget = ui->tableWidget->verticalHeader()->sectionSize(0);
	int nouvelleTailleHorizontale = (25 * tailleHorizontaleTableWidget) / 30;


	ui->tableWidget->setIconSize(QSize(nouvelleTailleHorizontale, tailleVerticaleTableWidget));
	QMainWindow::resizeEvent(event);

}

//Mettre cette fonction dans PieceTableau

bool Plateau::PlateauEchec::caseNoir(Position position) {
	if (position.x % 2 == 0) {
		if (position.y % 2 == 0) {
			return true;

		}
		else {
			return false;

		}
	}
	else {
		if (position.y % 2 == 0) {
			return false;

		}
		else {
			return true;

		}
	}

}

void Plateau::PlateauEchec::coloriageCasePermi(Position positionPieceSelectionne) {

	int range = ui->tableWidget->rowCount();
	int colonne = ui->tableWidget->columnCount();
	QColor couleur;

	for (int i = 0; i < range; i++) {
		for (int j = 0; j < colonne; j++) {
			if ((i != positionPieceSelectionne.x || positionPieceSelectionne.y != j)) {


				if (plateau->mouvementValide(plateau->getPiece(positionPieceSelectionne.x, positionPieceSelectionne.y + 1), { i,j + 1 })) {


					listeCaseColoriee.push_back({ i,j });
					
					QLinearGradient linearGrad(QPointF(0, 0), QPointF(50, 50));

					if (caseNoir({ i,j })) {
						if (plateau->getPiece(positionPieceSelectionne.x, positionPieceSelectionne.y + 1)->getCouleur() == Couleur::noir) {
							//Bleu case Noir
							couleur = QColor(0, 50, 78);
						}
						else {

							//Rouge case noir
							couleur = QColor(110, 0, 0);

						}

					}
					else {
						if (plateau->getPiece(positionPieceSelectionne.x, positionPieceSelectionne.y + 1)->getCouleur() == Couleur::noir) {
							//Bleu case Blanche

							couleur = QColor(101, 178, 255);
						}
						else {

							//Rouge case Blanche
							couleur = QColor(255, 92, 92);

						}

					}

					ui->tableWidget->item(i, j)->setBackground(couleur);

				}
			}
		}
	}
}

//Commenter ici 
void Plateau::PlateauEchec::remettreCouleurCaseAvant() {

	for (auto position : listeCaseColoriee) {

		if (caseNoir(position)) {
			QBrush brush(QColor(0, 0, 0, 255));
			ui->tableWidget->item(position.x, position.y)->setBackground(brush);
		}
		else {
			QBrush brush(QColor(255, 255, 255, 255));
			ui->tableWidget->item(position.x, position.y)->setBackground(brush);
		}

	}
}

void Plateau::PlateauEchec::eliminationPieceVue(const QIcon& icon, bool estImageNoir) {
	int range = 8;
	int colonne = 2;

	if ((!(plateau->listeTeamBleu.empty())) && !estImageNoir || ((!(plateau->listeTeamRouge.empty())) && estImageNoir)) {
		for (int i = 0; i < range; i++) {
			for (int j = 0; j < colonne; j++) {

				if (estImageNoir && !(ui->listeNoire->item(i, j))) {

					QTableWidgetItem* item = new QTableWidgetItem;
					item->setIcon(icon);
					ui->listeNoire->setItem(i, j, item);
					return;

				}
				else if (!estImageNoir && !(ui->listeBlanche->item(i, j))) {
					QTableWidgetItem* item = new QTableWidgetItem;
					item->setIcon(icon);
					ui->listeBlanche->setItem(i, j, item);
					return;

				}
			}
		}
	}
}


void Plateau::PlateauEchec::mouvementInvalide(shared_ptr<Piece> pieceSelectionneModele, Position positionFinale) {

	QString message = QString::fromStdString(plateau->mouvementInterditMessage(pieceSelectionneModele, { positionFinale.x,positionFinale.y + 1 }));
	QString messageLong = "<FONT COLOR='#ffffff'>" + message + "</FONT>";

	if ((pieceSelectionneModele->pareilCouleur(plateau->getPiece(positionFinale.x, positionFinale.y + 1)))) {

		messageLong += "<FONT COLOR='#ffffff'>  : Vous ne pouvez pas bouffer vos propres pièces!</FONT>";
	}

	QMessageBox::warning(this, "Mouvement interdit", messageLong);


}

void Plateau::PlateauEchec::afficherSignalement(shared_ptr<Piece> pieceSelectionneModele, Position positionFinale) {
	string nomPiece = plateau->getPiece(positionPieceSelectionne.x, positionPieceSelectionne.y + 1)->getNom();

	if (plateau->deplacementRoiValide(nomPiece, { positionFinale.x,positionFinale.y + 1 }) || plateau->autoEchec(pieceSelectionneModele->getCouleur() == Couleur::blanc)) {

		QMessageBox::warning(this, "Mouvement impossible", "<FONT COLOR='#ffffff'>Vous avez mis votre propre roi en échec</FONT>");

	}


	else  if (plateau->miseEnEchec(positionFinale.x, positionFinale.y + 1, pieceSelectionneModele->getCouleur() == Couleur::noir, true)) {

		QMessageBox::critical(this, " Échec", "<FONT COLOR='#ffffff'>Votre roi est en échec</FONT>");
	}

	//Mettre le Echec mat ici


}


void Plateau::PlateauEchec::mouvementValide(shared_ptr<Piece> pieceSelectionneModele, Position positionFinale) {
	shared_ptr<Piece> pieceBouffee = plateau->getPiece(positionFinale.x, positionFinale.y + 1);
	plateau->changerPiece(pieceSelectionneModele, { positionFinale.x,positionFinale.y + 1 });


	if ((ui->tableWidget->item(positionFinale.x, positionFinale.y)->icon().isNull()) == false) {

		eliminationPieceVue(ui->tableWidget->item(positionFinale.x, positionFinale.y)->icon(), pieceBouffee->getCouleur() == Couleur::noir);
		plateau->eliminationPieceModele(pieceBouffee);

	}


	auto pieceSelectionVue = ui->tableWidget->item(positionPieceSelectionne.x, positionPieceSelectionne.y);

	ui->tableWidget->item(positionFinale.x, positionFinale.y)->setIcon(pieceSelectionVue->icon());
	pieceSelectionVue->setIcon(QIcon());

	afficherSignalement(pieceSelectionneModele, positionFinale);



}
void Plateau::PlateauEchec::mouvement(int positionFinaleX, int positionFinaleY) {

	//Mon premier clic pour selectionner Pion
	if (premierClic && !(ui->tableWidget->item(positionFinaleX, positionFinaleY)->icon().isNull())) {

		auto couleur = plateau->getPiece(positionFinaleX, positionFinaleY + 1)->getCouleur();

		if (tourBlanc && couleur == Couleur::blanc || !tourBlanc && couleur == Couleur::noir) {
			positionPieceSelectionne.x = positionFinaleX;
			positionPieceSelectionne.y = positionFinaleY;
			premierClic = false;
			coloriageCasePermi({ positionFinaleX,positionFinaleY });
		}


	}

	//Deuxieme clic pour bouger mon pion
	else if (premierClic == false) {

		remettreCouleurCaseAvant();
		listeCaseColoriee.clear();

		shared_ptr<Piece> pieceSelectionneModele = plateau->getPiece((positionPieceSelectionne.x), positionPieceSelectionne.y + 1);

		bool caseDifferente = (positionPieceSelectionne.x != positionFinaleX || positionPieceSelectionne.y != positionFinaleY);
		bool deplacementValide = plateau->mouvementValide(pieceSelectionneModele, { positionFinaleX,positionFinaleY + 1 });


		if (caseDifferente && deplacementValide) {

			mouvementValide(pieceSelectionneModele, { positionFinaleX,positionFinaleY });
			tourBlanc = !tourBlanc;

			if (tourBlanc == false)
				ui->tourRole->setText("Tour : NOIR");
			else {
				ui->tourRole->setText("Tour : BLANC");
			}


		}


		else {

			if (caseDifferente) {

				mouvementInvalide(pieceSelectionneModele, { positionFinaleX,positionFinaleY });
			}

		}


		premierClic = true;


	}


}

Plateau::PlateauEchec::~PlateauEchec()
{

	delete ui;
}

