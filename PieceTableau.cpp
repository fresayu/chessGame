#include "PieceTableau.h"
#include <iostream>
#include <string>
#include "Roi.h"
#include "Fou.h"
#include "Cavalier.h"

using namespace std;
//-----------------------------------------Piece-------------------


Piece::Piece() {

    positionActuelle.x = 0;
    positionActuelle.y = 0;
    couleur_ = Couleur::vide;
    nom_ = "aucun";
}
Piece::Piece(Position position, Couleur couleur, string nom) : positionActuelle(position), couleur_(couleur), nom_(nom) {

}

void Piece::mouvement(Position position) {

    this->positionActuelle.x = position.x;
    this->positionActuelle.y = position.y;

};

bool Piece::validationMouvement(Position position, vector<vector<shared_ptr<Piece>>>& tableauEchec) {

    return false;

};

string Piece::getNom() {
    if (this == nullptr) {
        return "Case vide";

    }
    return nom_;
}

Couleur Piece::getCouleur() {
    if (this == nullptr) {
        cout << "La case est vide." << endl;
        return Couleur::vide;
    }

    return couleur_;
};

bool Piece::verificationAutrePiece(Position position, vector<vector<shared_ptr<Piece>>>& tableauEchec) {
    if (tableauEchec[position.x][position.y] != nullptr) {
        if ((position.x == this->positionActuelle.x) && (position.y == this->positionActuelle.y))
            cout << "Tentative de deplacement sur la meme case. " << endl;
        return true;
    }


   return false;

}

void Piece::getPositionActuelle() {
    if (this == nullptr) {
        cout << "La case est vide" << endl;
    }
    else {
        positionActuelle.positionNumerotation();
    }
}

bool Piece::pareilCouleur(shared_ptr<Piece> piece) {
    if (this->getCouleur() == piece->getCouleur())
        return true;

    return false;
};

//--------------------------Plateau---------------------------------


string Plateau::mouvementInterditMessage(shared_ptr<Piece> piece, Position positionApres){
    return "Le mouvement n'est pas permis, vous essayez de deplacer le " + piece->getNom()+ " de " +
    piece->positionActuelle.positionNumerotation() + " vers la case " + positionApres.positionNumerotation();

}

Plateau* Plateau::getInstancePlateau() {

    if (plateau == nullptr)
        plateau = new Plateau;

    return plateau;
}

void Plateau::effacePlateau() {

    delete plateau;
    plateau = nullptr;

}
bool Plateau::debordementCase(Position position) {
    if ((position.x < 0 || position.x > 7) && (position.y < 1 || position.y >8 )) {
        cout << "Depassement du jeu d'echecs!" << endl;
    return true;
}

    return false;

};

bool Plateau::mouvementValide(const shared_ptr<Piece> &piece, Position position){

    if (debordementCase(position))
        return false;

    if (piece->validationMouvement(position, tableauEchec)) {


        auto autrePiece = tableauEchec[position.x][position.y];

        if ((piece->verificationAutrePiece(position, tableauEchec)) ) {



            if ((piece->pareilCouleur(autrePiece)) ) {


                return false;
            }
            if(piece->mouvementPossible == false){
                piece->mouvementPossible = true;
                return false;
            }



        }

            return true;


    }

    return false;

}
bool Plateau::changerPiece(shared_ptr<Piece>& piece, Position position) {

    Position positionAncien = piece->positionActuelle;

    if (debordementCase(position)){

        return false;
    }


    if (piece->validationMouvement(position, tableauEchec)) {


        auto autrePiece = tableauEchec[position.x][position.y];

        if ((piece->verificationAutrePiece(position, tableauEchec))) {


            if ((piece->pareilCouleur(autrePiece))) {


                return false;
            }

            if(piece->mouvementPossible == false){
                 piece->mouvementPossible = true;
                return false;

            }


        }



            cout << autrePiece->getNom() << " a ete bouffe par " << piece->getNom() << endl;
            piece->mouvement(position);
            cout << "La piece " << piece->getNom() << " est deplacee a la case ";
            position.positionNumerotation();

            tableauEchec[positionAncien.x][positionAncien.y] = nullptr;

            tableauEchec[position.x][position.y] = piece;


            return true;




    }


            cout << "Le mouvement n'est pas permis, vous essayez de deplacer le " << piece->getNom() << " de ";
            piece->positionActuelle.positionNumerotation();
            cout << " vers la case ";
            position.positionNumerotation();
            cout << "\n";




    return false;



}

Plateau::Plateau() {

    tableauEchec.resize(8);

    for (int i = 0; i < 8; ++i)
        tableauEchec[i].resize(9);

    initialiserJeux();

    cout << "Le plateau d'echecs a ete construit!" << endl;

}


bool Plateau::getCase(Position position) {

    cout << "Nom : " << tableauEchec[position.x][position.y]->getNom() << " | " << "Position : ";
    if (tableauEchec[position.x][position.y] != nullptr) {
        tableauEchec[position.x][position.y]->getPositionActuelle();
        return true;
    }
    else {
        position.positionNumerotation();
        cout << "\n";
        return false;
    }
}

//Mettre tout les pièces dans le tableau
void Plateau::initialiserJeux() {

    //Roi
    if(Roi::roi1 != nullptr)
        tableauEchec[Roi::roi1->positionActuelle.x][Roi::roi1->positionActuelle.y] = Roi::roi1;
    if (Roi::roi2 != nullptr)
        tableauEchec[Roi::roi2->positionActuelle.x][Roi::roi2->positionActuelle.y] = Roi::roi2;

    //Cavalier de gauche
    if(Cavalier::cavalier1 != nullptr)
        tableauEchec[Cavalier::cavalier1->positionActuelle.x][Cavalier::cavalier1->positionActuelle.y] = Cavalier::cavalier1;
    if (Cavalier::cavalier2 != nullptr)
        tableauEchec[Cavalier::cavalier2->positionActuelle.x][Cavalier::cavalier2->positionActuelle.y] = Cavalier::cavalier2;

    //Cavalier de droite
    if(Cavalier::cavalier3 != nullptr)
        tableauEchec[Cavalier::cavalier3->positionActuelle.x][Cavalier::cavalier3->positionActuelle.y] = Cavalier::cavalier3;
    if (Cavalier::cavalier4 != nullptr)
        tableauEchec[Cavalier::cavalier4->positionActuelle.x][Cavalier::cavalier4->positionActuelle.y] = Cavalier::cavalier4;

    //Fou de gauche
    if(Fou::fou1 != nullptr)
        tableauEchec[Fou::fou1->positionActuelle.x][Fou::fou1->positionActuelle.y] = Fou::fou1;
    if (Fou::fou2 != nullptr)
        tableauEchec[Fou::fou2->positionActuelle.x][Fou::fou2->positionActuelle.y] = Fou::fou2;

    //Fou de droite
    if(Fou::fou3 != nullptr)
        tableauEchec[Fou::fou3->positionActuelle.x][Fou::fou3->positionActuelle.y] = Fou::fou3;
    if (Fou::fou4 != nullptr)
        tableauEchec[Fou::fou4->positionActuelle.x][Fou::fou4->positionActuelle.y] = Fou::fou4;


}

Plateau::~Plateau() {
    cout << "Le plateau de jeu a ete detruit!" << endl;
}
