#pragma once
#include "PieceTableau.h"
#include <iostream>
#include "Ajout.h"

namespace Fou
{
	using namespace std;

	using PieceTableau::Piece;
	using Ajout::Couleur;
	using Ajout::Position;


	class Fou : public Piece
	{
	public:


		Fou(Fou* fou);

		static shared_ptr<Piece> getInstanceFouGauche(Couleur couleur);
		static shared_ptr<Piece> getInstanceFouDroite(Couleur couleur);
		bool verificationAutrePiece(Position position, vector<vector<shared_ptr<Piece>>>& tableauEchec);


	private:
		bool validationMouvement(Position positionApres, vector<vector<shared_ptr<Piece>>>& tableauEchec);


		Fou(Position position, Couleur couleur, string nom);

		friend class PieceTableau::Plateau;
		inline static shared_ptr<Piece> fou1 = nullptr;
		inline static shared_ptr<Piece> fou2 = nullptr;

		inline static shared_ptr<Piece> fou3 = nullptr ;
		inline static shared_ptr<Piece> fou4 = nullptr;


	};
}


