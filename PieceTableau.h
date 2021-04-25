#pragma once
#include "Ajout.h"

#include<iostream>
#include <vector>
#include <string>
#include <memory>
#include <map>

namespace PieceTableau
{

	using namespace std;

	using Ajout::Couleur;
	using Ajout::Position;

	class Plateau;

	class Piece {

	public:

		Piece();

		Piece(Position position, Couleur couleur, string nom);


		virtual void changerCoordonne(Position position);
		virtual  bool verificationAutrePiece(Position position, vector<vector<shared_ptr<Piece>>>& tableauEchec);

		virtual bool validationMouvement(Position position, vector<vector<shared_ptr<Piece>>>& tableauEchec);

		string getNom();
		Couleur getCouleur();
		Position getPositionActuelle();
		bool pareilCouleur(shared_ptr<Piece> piece);




	protected:
		friend class Plateau;
		Position positionActuelle;
		Couleur couleur_;
		string nom_;
		bool mouvementPossible = true;

	private:
		void setPieceZero();

	};


	class Plateau {

	public:

		static Plateau* getInstancePlateau();
		static void effacePlateau();
		bool changerPiece(shared_ptr<Piece>& piece, Position position);

		bool getCase(Position position);
		const shared_ptr<Piece> getPiece(int x, int y) {
			return tableauEchec[x][y];
		}
		bool mouvementValide(const shared_ptr<Piece>& piece, Position position);
		string mouvementInterditMessage(shared_ptr<Piece> piece, Position positionApres);
		bool miseEnEchec(int x, int y, bool estNoir, bool changerPosition, Position positionRoi = { 0,0 });
		bool autoEchec(bool estPieceBlanche);
		void eliminationPieceModele(shared_ptr<Piece> pieceDetruite);

		bool deplacementRoiValide(string roi, Position positionRoiFuture);

		vector<shared_ptr<Piece>> listeTeamBleu;
		vector<shared_ptr<Piece>> listeTeamRouge;

		map<string, shared_ptr<Piece>> listePieceBlanche;
		map<string, shared_ptr<Piece>> listePieceNoir;



	private:

		bool debordementCase(Position position);
		void initialiserJeux();
		friend class Piece;
		vector<vector<shared_ptr<Piece>>> tableauEchec;
		inline static Plateau* plateau = nullptr;

		Plateau();
		~Plateau();


	};
}



