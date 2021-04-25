#pragma once
#include "PieceTableau.h"
#include <iostream>
#include "Ajout.h"
using namespace std;


class Roi : public Piece
{
public:

    Roi(Roi* roi);

    //Le singleton
    static shared_ptr<Piece> getInstanceRoi( Couleur couleur);
    static void effacerInstanceRoi();


private:

    bool validationMouvement(Position positionApres, vector<vector<shared_ptr<Piece>>> &tableauEchec);

    Roi(Position position, Couleur couleur, string nom);

    friend class Plateau;
    static shared_ptr<Piece> roi1;
    static shared_ptr<Piece> roi2;

};




