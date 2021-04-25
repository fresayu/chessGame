#ifndef PLATEAUECHEC_H
#define PLATEAUECHEC_H

#include <QMainWindow>
#include <QIcon>
#include "Ajout.h"
#include "PieceTableau.h"
#include "Roi.h"
#include "Cavalier.h"
#include "Fou.h"
#include <qtablewidget.h>
#include  <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class PlateauEchec; }
QT_END_NAMESPACE

namespace Plateau
{

	using namespace std;

	using Ajout::Couleur;
	using Ajout::Position;
	using PieceTableau::Piece;

	class PlateauEchec : public QMainWindow
	{
		Q_OBJECT

	public:
		PlateauEchec(QWidget* parent = nullptr);
		~PlateauEchec();

	public slots:
		void mouvement(int x, int y);
		void resizeEvent(QResizeEvent*);

	private:
		void eliminationPieceVue(const QIcon& icon, bool estNoir);
		bool caseNoir(Position position);
		void coloriageCasePermi(Position positionPieceSelectionne);
		void remettreCouleurCaseAvant();
		void initialisationFenetre();
		void mouvementValide(shared_ptr<Piece> piece, Position position);
		void mouvementInvalide(shared_ptr<Piece> piece, Position position);
		void afficherSignalement(shared_ptr<Piece> pieceSelectionneModele, Position positionFinale);

		Ui::PlateauEchec* ui;
		Position positionPieceSelectionne;
		bool premierClic = true;
		bool tourBlanc = true;


		PieceTableau::Plateau* plateau = PieceTableau::Plateau::getInstancePlateau();
		vector<Position> listeCaseColoriee;

	};
}
#endif // PLATEAUECHEC_H
