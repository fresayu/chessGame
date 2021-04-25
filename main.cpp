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




	QApplication a(argc, argv);
	Plateau::PlateauEchec w;
	w.show();
	return a.exec();
}

