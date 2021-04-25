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


shared_ptr<Piece> Cavalier::cavalier1 = nullptr;
shared_ptr<Piece> Cavalier::cavalier2 = nullptr;
shared_ptr<Piece> Cavalier::cavalier3 = nullptr;
shared_ptr<Piece> Cavalier::cavalier4 = nullptr;

shared_ptr<Piece> Fou::fou1 = nullptr;
shared_ptr<Piece> Fou::fou2 = nullptr;
shared_ptr<Piece> Fou::fou3 = nullptr;
shared_ptr<Piece> Fou::fou4 = nullptr;

shared_ptr<Piece> Roi::roi1 = nullptr;
shared_ptr<Piece> Roi::roi2 = nullptr;

Plateau* Plateau::plateau   = nullptr;

int main(int argc, char *argv[])
{

    //Initialisation des pièces

    QApplication a(argc, argv);
    PlateauEchec w;
    w.show();
    return a.exec();
}
