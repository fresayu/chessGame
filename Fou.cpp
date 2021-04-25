#include <iostream>
#include <string>
#include "Fou.h"
#include "Ajout.h"
#include <cmath>
#include "PieceTableau.h";


Fou::Fou(Fou* fou) : Fou(fou->positionActuelle, fou->couleur_, fou->nom_) {


}

shared_ptr<Piece> Fou::getInstanceFouGauche(Couleur couleur) {

    if (fou1 == nullptr && couleur == Couleur::blanc) {


        fou1 = make_shared<Fou>(Fou({ 0,6 }, Couleur::blanc, "Fou blanc"));

        return fou1;
    }
    else if(fou1 != nullptr && couleur == Couleur::blanc) {
        return fou1;
    }

    if (fou2 == nullptr && couleur == Couleur::noir) {

        fou2 = make_shared<Fou>(Fou({ 7,3 }, Couleur::noir, "Fou noir"));
        return fou2;
    }
    else if (fou2 != nullptr && couleur == Couleur::noir) {
        return fou2;
    }

}


shared_ptr<Piece> Fou::getInstanceFouDroite(Couleur couleur) {

    if (fou3 == nullptr && couleur == Couleur::blanc) {

        fou3 = make_shared<Fou>(Fou({ 0,3 }, Couleur::blanc, "Fou blanc"));

        return fou3;
    }
    else if(fou3 != nullptr && couleur == Couleur::blanc) {
        return fou3;
    }

    if (fou4 == nullptr && couleur == Couleur::noir) {

        fou4 = make_shared<Fou>(Fou({ 7,6 }, Couleur::noir, "Fou noir"));
        return fou4;
    }
    else if (fou4 != nullptr && couleur == Couleur::noir) {
        return fou4;
    }

}

Fou::Fou(Position position, Couleur couleur, string nom) : Piece(position, couleur, nom) {
    cout << "La piece " << this->nom_ << " a ete cree a l'endroit ";

    position.positionNumerotation();
    cout << "\n";

}

bool Fou::validationMouvement(Position positionApres, vector<vector<shared_ptr<Piece>>>& tableauEchec) {

    //Deplacement horizontale
    if ((abs(positionApres.x - positionActuelle.x) == (abs(positionApres.y - positionActuelle.y)))) {
        return true;
    }


    return false;

}

bool Fou::verificationAutrePiece(Position position, vector<vector<shared_ptr<Piece>>>& tableauEchec) {
    int nCasesDistance = abs(this->positionActuelle.y - position.y);

    int indexY = this->positionActuelle.y;
    int indexX = this->positionActuelle.x;


  //  cout << "Commencement " << indexX << " " << indexY << endl;
    // cout << "BTS FOREVER"  << position.positionNumerotation() << endl;

    bool blocage = true;

    for (int i = 0; i < nCasesDistance; i++) {


        if ((this->positionActuelle.y - position.y) < 0) indexY++;
        else indexY--;

        if ((this->positionActuelle.x - position.x) < 0) indexX++;
        else indexX--;
   //  cout << "Iteration n " << indexX << " " << indexY << endl;


        if (tableauEchec[indexX][indexY] == nullptr){


            blocage = false;

        }

        else {


            blocage = true;

        }

        if (blocage == true) {
          //  cout << "Bonjour" << endl;
            if(position.x != indexX || position.y != indexY){

                mouvementPossible = false;

            }


            return true;
        }

    }

    return false;

}
