#pragma once
#include "PieceTableau.h"
#include <iostream>
#include "Ajout.h"


namespace Cavalier
{

	using namespace std;

	using PieceTableau::Piece;
	using Ajout::Couleur;
	using Ajout::Position;


	class Cavalier : public Piece
	{

	public:
		Cavalier(Cavalier* cavalier);

		static shared_ptr<Piece> getInstanceCavalierGauche(Couleur couleur);
		static shared_ptr<Piece> getInstanceCavalierDroite(Couleur couleur);


	private:

		bool validationMouvement(Position positionApres, vector<vector<shared_ptr<Piece>>>& tableauEchec);


		Cavalier(Position position, Couleur couleur, string nom);

		friend class PieceTableau::Plateau;

		inline static shared_ptr<Piece> cavalier1 = nullptr;
		inline static shared_ptr<Piece> cavalier2 = nullptr;

		inline static shared_ptr<Piece> cavalier3 = nullptr;
		inline static shared_ptr<Piece> cavalier4 = nullptr;


	};

}