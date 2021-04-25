#include "PlateauEchec.h"

#include <QApplication>
#include <iostream>
#include <vector>
#include "Ajout.h"
#include "PieceTableau.h"
#include "Roi.h"
#include "Cavalier.h"
#include "Fou.h"



using namespace std;


/*
shared_ptr<PieceTableau::Piece> Cavalier::Cavalier::cavalier1 = nullptr;
shared_ptr<PieceTableau::Piece> Cavalier::Cavalier::cavalier2 = nullptr;
shared_ptr<PieceTableau::Piece> Cavalier::Cavalier::cavalier3 = nullptr;
shared_ptr<PieceTableau::Piece> Cavalier::Cavalier::cavalier4 = nullptr;

shared_ptr<PieceTableau::Piece> Fou::Fou::fou1 = nullptr;
shared_ptr<PieceTableau::Piece> Fou::Fou::fou2 = nullptr;
shared_ptr<PieceTableau::Piece> Fou::Fou::fou3 = nullptr;
shared_ptr<PieceTableau::Piece> Fou::Fou::fou4 = nullptr;

//shared_ptr<PieceTableau::Piece> Roi::Roi::roi1 = nullptr;
//shared_ptr<PieceTableau::Piece> Roi::Roi::roi2 = nullptr;


PieceTableau::Plateau* PieceTableau::Plateau::plateau = nullptr;

*/




int main(int argc, char* argv[])
{

	using PieceTableau::Piece;

	using Roi::Roi;
	using Cavalier::Cavalier;
	using Fou::Fou;

	using Ajout::Couleur;


	//Initialisation des pièces
	shared_ptr<Piece> roiBlanc = Roi::getInstanceRoi(Couleur::blanc);
	shared_ptr<Piece> roiNoir = Roi::getInstanceRoi(Couleur::noir);

	shared_ptr<Piece> cavalierNoirG = Cavalier::getInstanceCavalierGauche(Couleur::noir);
	shared_ptr<Piece> cavalierBlancG = Cavalier::getInstanceCavalierGauche(Couleur::blanc);
	shared_ptr<Piece> cavalierNoirD = Cavalier::getInstanceCavalierDroite(Couleur::noir);
	shared_ptr<Piece> cavalierBlancD = Cavalier::getInstanceCavalierDroite(Couleur::blanc);

	shared_ptr<Piece> fouNoirD = Fou::getInstanceFouDroite(Couleur::noir);
	shared_ptr<Piece> fouBlancD = Fou::getInstanceFouDroite(Couleur::blanc);
	shared_ptr<Piece> fouNoirG = Fou::getInstanceFouGauche(Couleur::noir);
	shared_ptr<Piece> fouBlancG = Fou::getInstanceFouGauche(Couleur::blanc);

	QApplication a(argc, argv);
	Plateau::PlateauEchec w;
	w.show();
	return a.exec();
}

