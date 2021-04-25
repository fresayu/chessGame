#include "PieceTableau.h"
#include <iostream>
#include <string>
#include "Roi.h"
#include "Fou.h"
#include "Cavalier.h"

using namespace std;

//-----------------------------------------Piece-------------------


PieceTableau::Piece::Piece() {

    positionActuelle.x = 0;
    positionActuelle.y = 0;
    couleur_ = Couleur::vide;
    nom_ = "aucun";
}
PieceTableau::Piece::Piece(Position position, Couleur couleur, string nom) : positionActuelle(position), couleur_(couleur), nom_(nom) {

}

void PieceTableau::Piece::changerCoordonne(Position position) {

    this->positionActuelle.x = position.x;
    this->positionActuelle.y = position.y;

};

bool PieceTableau::Piece::validationMouvement(Position position, vector<vector<shared_ptr<Piece>>>& tableauEchec) {

    return false;

};

string PieceTableau::Piece::getNom() {
    if (this == nullptr) {
        return "Case vide";

    }
    return nom_;
}

Ajout::Couleur PieceTableau::Piece::getCouleur() {
    if (this == nullptr) {
        cout << "La case est vide." << endl;
        return Couleur::vide;
    }

    return couleur_;
};

bool PieceTableau::Piece::verificationAutrePiece(Position position, vector<vector<shared_ptr<Piece>>>& tableauEchec) {
    if (tableauEchec[position.x][position.y] != nullptr) {
        if ((position.x == this->positionActuelle.x) && (position.y == this->positionActuelle.y))
            cout << "Tentative de deplacement sur la meme case. " << endl;
        return true;
    }


   return false;

}

 Ajout::Position PieceTableau::Piece::getPositionActuelle() {
    if (this == nullptr) {
        cout << "La case est vide" << endl;
    }
    else {
        positionActuelle.positionNumerotation();
    }

    return positionActuelle;
}

bool PieceTableau::Piece::pareilCouleur(shared_ptr<Piece> piece) {
    if (this->getCouleur() == piece->getCouleur())
        return true;

    return false;
};

void PieceTableau::Piece::setPieceZero() {
    this->positionActuelle.x = 0;
    this->positionActuelle.y = 0;

}
//--------------------------Plateau---------------------------------


string PieceTableau::Plateau::mouvementInterditMessage(shared_ptr<Piece> piece, Position positionApres){
    return "Le mouvement n'est pas permis, vous essayez de deplacer le " + piece->getNom()+ " de " +
    piece->positionActuelle.positionNumerotation() + " vers la case " + positionApres.positionNumerotation();

}
void PieceTableau::Plateau::eliminationPieceModele(shared_ptr<Piece> pieceDetruire) {
    if (pieceDetruire->getCouleur() == Couleur::noir) {
        listePieceNoir.erase(pieceDetruire->getNom());
    }
    else if (pieceDetruire->getCouleur() == Couleur::blanc) {
        listePieceBlanche.erase(pieceDetruire->getNom());
    }

    pieceDetruire->setPieceZero();
}

PieceTableau::Plateau* PieceTableau::Plateau::getInstancePlateau() {

    if (plateau == nullptr)
        plateau = new Plateau;

    return plateau;
}

void PieceTableau::Plateau::effacePlateau() {

    delete plateau;
    plateau = nullptr;

}
bool PieceTableau::Plateau::debordementCase(Position position) {
    if ((position.x < 0 || position.x > 7) && (position.y < 1 || position.y >8 )) {
        cout << "Depassement du jeu d'echecs!" << endl;
    return true;
}

    return false;

};


bool PieceTableau::Plateau::mouvementValide(const shared_ptr<Piece> &piece, Position position){

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
bool PieceTableau::Plateau::changerPiece(shared_ptr<Piece>& piece, Position position) {

        Position positionAncien = piece->positionActuelle;
        auto autrePiece = tableauEchec[position.x][position.y];
        if (tableauEchec[position.x][position.y] != nullptr) {

            if (tableauEchec[positionAncien.x][positionAncien.y]->getCouleur() == Couleur::noir) {

                listeTeamBleu.push_back(tableauEchec[position.x][position.y]);
            }
            else {


                listeTeamRouge.push_back(tableauEchec[position.x][position.y]);
			}
		}

		cout << autrePiece->getNom() << " a ete bouffe par " << piece->getNom() << endl;
		piece->changerCoordonne(position);
		cout << "La piece " << piece->getNom() << " est deplacee a la case ";
		position.positionNumerotation();

		tableauEchec[positionAncien.x][positionAncien.y] = nullptr;

		tableauEchec[position.x][position.y] = piece;

		return true;

}

bool PieceTableau::Plateau::miseEnEchec(int x, int y, bool estPieceAttaquanteNoir, bool changerPosition, Position positionRoi) 
{
	using Roi::Roi;

	if (estPieceAttaquanteNoir) {

		if (changerPosition) {
			positionRoi = Roi::roi1->getPositionActuelle();
		}


		if (mouvementValide(tableauEchec[x][y], positionRoi)) {
			return true;
		}
	}
	else {

		if (changerPosition) {
			positionRoi = Roi::roi2->getPositionActuelle();
		}

		if (mouvementValide(tableauEchec[x][y], positionRoi)) {
			return true;
		}

	}


	return false;
}


bool PieceTableau::Plateau::deplacementRoiValide(string roi, Position positionRoiFuture) {

    //Roi blanc
    if (roi == "Roi blanc") {
        for (auto&& piece : listePieceNoir) {
            if (miseEnEchec(piece.second->getPositionActuelle().x, piece.second->getPositionActuelle().y, true, false,positionRoiFuture)) {
                return true;
            }
        }
    }
    //Roi noir
    else if(roi == "Roi noir") {
        for (auto&& piece : listePieceBlanche) {
            if (miseEnEchec(piece.second->getPositionActuelle().x, piece.second->getPositionActuelle().y, false, false,positionRoiFuture)) {
                return true;
            }
        }
    }
    return false;
}

bool PieceTableau::Plateau::autoEchec(bool estPieceBlanche) {
	if (estPieceBlanche) {
		for (auto&& pieceAttaquante : listePieceNoir) {
			if (miseEnEchec(pieceAttaquante.second->getPositionActuelle().x, pieceAttaquante.second->getPositionActuelle().y, true, true)) {
				return true;
			}
		}
	}
	else {

		for (auto&& pieceAttaquante : listePieceBlanche) {
			if (miseEnEchec(pieceAttaquante.second->getPositionActuelle().x, pieceAttaquante.second->getPositionActuelle().y, false, true)) {
				return true;
			}
		}

	}

	return false;

}

PieceTableau::Plateau::Plateau() {

	tableauEchec.resize(8);

	for (int i = 0; i < 8; ++i)
		tableauEchec[i].resize(9);

	initialiserJeux();

	cout << "Le plateau d'echecs a ete construit!" << endl;

}


bool PieceTableau::Plateau::getCase(Position position) {

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
void PieceTableau::Plateau::initialiserJeux() {

	using Roi::Roi;
	using Cavalier::Cavalier;
	using Fou::Fou;

	//Roi
	if (Roi::roi1 != nullptr)
		tableauEchec[Roi::roi1->positionActuelle.x][Roi::roi1->positionActuelle.y] = Roi::roi1;
	if (Roi::roi2 != nullptr)
		tableauEchec[Roi::roi2->positionActuelle.x][Roi::roi2->positionActuelle.y] = Roi::roi2;

	listePieceBlanche[Roi::roi1->getNom()] = Roi::roi1;
	listePieceNoir[Roi::roi2->getNom()] = Roi::roi2;

	//Cavalier de gauche
	if (Cavalier::cavalier1 != nullptr) {
		tableauEchec[Cavalier::cavalier1->positionActuelle.x][Cavalier::cavalier1->positionActuelle.y] = Cavalier::cavalier1;

		listePieceBlanche[Cavalier::cavalier1->getNom()] = Cavalier::cavalier1;

	}
	if (Cavalier::cavalier2 != nullptr) {
		tableauEchec[Cavalier::cavalier2->positionActuelle.x][Cavalier::cavalier2->positionActuelle.y] = Cavalier::cavalier2;
		listePieceNoir[Cavalier::cavalier2->getNom()] = Cavalier::cavalier2;

	}




	//Cavalier de droite
	if (Cavalier::cavalier3 != nullptr) {
		tableauEchec[Cavalier::cavalier3->positionActuelle.x][Cavalier::cavalier3->positionActuelle.y] = Cavalier::cavalier3;
		listePieceBlanche[Cavalier::cavalier3->getNom()] = Cavalier::cavalier3;

	}
	if (Cavalier::cavalier4 != nullptr) {
		tableauEchec[Cavalier::cavalier4->positionActuelle.x][Cavalier::cavalier4->positionActuelle.y] = Cavalier::cavalier4;
		listePieceNoir[Cavalier::cavalier4->getNom()] = Cavalier::cavalier4;

	}


	//Fou de gauche
	if (Fou::fou1 != nullptr) {
		tableauEchec[Fou::fou1->positionActuelle.x][Fou::fou1->positionActuelle.y] = Fou::fou1;
		listePieceBlanche[Fou::fou1->getNom()] = Fou::fou1;

	}
	if (Fou::fou2 != nullptr) {
		tableauEchec[Fou::fou2->positionActuelle.x][Fou::fou2->positionActuelle.y] = Fou::fou2;

		listePieceNoir[Fou::fou2->getNom()] = Fou::fou2;

	}


	//Fou de droite
	if (Fou::fou3 != nullptr) {
		tableauEchec[Fou::fou3->positionActuelle.x][Fou::fou3->positionActuelle.y] = Fou::fou3;
		listePieceBlanche[Fou::fou3->getNom()] = Fou::fou3;

	}
	if (Fou::fou4 != nullptr) {
		tableauEchec[Fou::fou4->positionActuelle.x][Fou::fou4->positionActuelle.y] = Fou::fou4;

		listePieceNoir[Fou::fou4->getNom()] = Fou::fou4;

	}

}

PieceTableau::Plateau::~Plateau() {
	cout << "Le plateau de jeu a ete detruit!" << endl;
}
