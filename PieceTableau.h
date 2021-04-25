#pragma once
#include "Ajout.h"
#include<iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

class Plateau;

class Piece {

public:

    Piece();

    Piece(Position position, Couleur couleur, string nom);


    virtual void mouvement(Position position);
    virtual  bool verificationAutrePiece(Position position, vector<vector<shared_ptr<Piece>>>& tableauEchec);

    virtual bool validationMouvement(Position position, vector<vector<shared_ptr<Piece>>>& tableauEchec);

    string getNom();
    Couleur getCouleur();
    void getPositionActuelle();
    bool pareilCouleur(shared_ptr<Piece> piece);




protected:
    friend class Plateau;
    Position positionActuelle;
    Couleur couleur_;
    string nom_;
    bool mouvementPossible = true;

};


class Plateau {

public:

    static Plateau* getInstancePlateau();
    static void effacePlateau();
    bool changerPiece(shared_ptr<Piece>& piece, Position position);

    bool getCase(Position position);
    shared_ptr<Piece> getPiece(int x, int y){
        return tableauEchec[x][y];
    }
    bool mouvementValide(const shared_ptr<Piece>& piece, Position position);
    string mouvementInterditMessage(shared_ptr<Piece> piece, Position positionApres);


private:

    bool debordementCase(Position position);
    void initialiserJeux();
    friend class Piece;
   vector<vector<shared_ptr<Piece>>> tableauEchec;
    static Plateau* plateau;


    Plateau();
    ~Plateau();


};



