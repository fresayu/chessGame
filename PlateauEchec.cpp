#include <iostream>
#include <string>
#include "PlateauEchec.h"
#include "ui_PlateauEchec.h"
#include <QTableWidget>
#include <QMessageBox>
#include <QPixmap>

PlateauEchec::PlateauEchec(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlateauEchec)
{

    ui->setupUi(this);

    connect(ui->tableWidget,SIGNAL(cellClicked(int,int)),this,SLOT(mouvement(int,int)));

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setFixedWidth(25);
        ui->tableWidget->horizontalHeader()->setFixedHeight(35);

    auto a = ui->listeBlanche->horizontalHeader()->length();
    auto b = ui->listeBlanche->verticalHeader()->length();
    ui->listeBlanche->setMaximumWidth(a);
    ui->listeBlanche->setMaximumHeight(b);

    auto c = ui->listeNoire->horizontalHeader()->length();
    auto d = ui->listeNoire->verticalHeader()->length();
    ui->listeNoire->setMaximumWidth(c);
    ui->listeNoire->setMaximumHeight(d);

  

}

void PlateauEchec::couleurSelection(int x, int y) {

    //ICI
    
   
	if (chessBoard->getPiece(x, y + 1)->getCouleur() == Couleur::noir) {
       
    ui->tableWidget->setStyleSheet("QTableView { selection-color: rgba(52,65,93,50); selection-background-color: blue; }");

	}
	else {
	ui->tableWidget->setStyleSheet("QTableView {selection-color: rgba(52,65,93,50); selection-background-color: red; }");
	
	}

        
}




void PlateauEchec::resizeEvent(QResizeEvent* event)
{

    int x = ui->tableWidget->horizontalHeader()->sectionSize(0);
    int y = ui->tableWidget->verticalHeader()->sectionSize(0);
    int nouveauX = (25*x)/30;


    ui->tableWidget->setIconSize(QSize(nouveauX,y));
    QMainWindow::resizeEvent(event);

}

bool PlateauEchec::caseNoir(Position position){
    if(position.x % 2 == 0){
        if(position.y % 2 == 0){
            return true;

        }else{
            return false;

        }
    }else{
        if(position.y % 2 == 0){
            return false;

        }else{
            return true;

        }
    }

}

void PlateauEchec::emphaseCaseDeplacement(int x, int y){

    int range = ui->tableWidget->rowCount();
    int colonne = ui->tableWidget->columnCount();
    QColor couleur;

    for(int i = 0; i < range; i++){
        for(int j = 0; j < colonne; j++){
            if( (i != x || y != j)){


                if(chessBoard->mouvementValide(chessBoard->getPiece(x,y+1),{i,j+1})){


                    listeBrushRouge.push_back({i,j});

                      QLinearGradient linearGrad(QPointF(0, 0), QPointF(50, 50));

					  if (caseNoir({ i,j })) {
						  if (chessBoard->getPiece(x, y + 1)->getCouleur() == Couleur::noir) {
                          //Bleu case Noir
							  couleur = QColor(0, 50, 78);
						  }
						  else {

                          //Rouge case noir
							  couleur = QColor(110, 0, 0);
						  }

					  }
					  else {
						  if (chessBoard->getPiece(x, y + 1)->getCouleur() == Couleur::noir) {
                          //Bleu case Blanche
							  couleur = QColor(101, 178, 255);
						  }
						  else {

                          //Rouge case Blanche
							  couleur = QColor(255, 92, 92);
						  }

                      }


                        
                      ui->tableWidget->item(i,j)->setBackground(couleur);




                }
            }
        }
    }
}

void PlateauEchec::remettreBrushAvant(){

	for (auto position : listeBrushRouge) {

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
void PlateauEchec::mouvement(int x, int y) {


    if (premierClic == false) {
        if (caseNoir({ x,y })) {
            ui->tableWidget->setStyleSheet("QTableView {selection-background-color: black; }");
        }
        else {
            ui->tableWidget->setStyleSheet("QTableView { selection-background-color: white; }");
        }
    }

	if (premierClic && !(ui->tableWidget->item(x, y)->icon().isNull())) {

		positionAvant.x = x;
		positionAvant.y = y;
		premierClic = false;
		emphaseCaseDeplacement(x, y);
        couleurSelection(x, y);



    }
    else if(premierClic == false){

        remettreBrushAvant();


        listeBrushRouge.clear();
        auto pieceAvantReel = chessBoard->getPiece((positionAvant.x),positionAvant.y+1);

        if((positionAvant.x != x || positionAvant.y != y) && chessBoard->changerPiece(pieceAvantReel,{x,y+1}) ){

        auto pieceAvant = ui->tableWidget->item(positionAvant.x,positionAvant.y);

        ui->tableWidget->item(x,y)->setIcon(pieceAvant->icon());
        pieceAvant->setIcon(QIcon());

        }else{
            if(!(pieceAvantReel->pareilCouleur(chessBoard->getPiece(x,y+1)))){
                QString message = QString::fromStdString(chessBoard->mouvementInterditMessage(pieceAvantReel,{x,y+1}));
                QMessageBox::warning(this, "Mouvement interdi", message);
            }else{
                if(positionAvant.x != x || positionAvant.y != y)
                  QMessageBox::warning(this, "Même couleur", "Vous ne pouvez pas bouffer vos propres pièces!");

			}

		}




		premierClic = true;


	}
      
   
    


}
PlateauEchec::~PlateauEchec()
{
    delete ui;
}

