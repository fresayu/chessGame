#pragma once
#include "PieceTableau.h"
#include <iostream>
#include "Ajout.h"

namespace Roi
{
	using namespace std;

	using PieceTableau::Piece;
	using Ajout::Couleur;
	using Ajout::Position;


	class Roi : public Piece
	{
	public:

		Roi(Roi* roi);

		//Le singleton
		static shared_ptr<Piece> getInstanceRoi(Couleur couleur);
		static void effacerInstanceRoi();


	private:
		inline static shared_ptr<Piece> roi1 = nullptr;

		bool validationMouvement(Position positionApres, vector<vector<shared_ptr<Piece>>>& tableauEchec);

		Roi(Position position, Couleur couleur, string nom);

		friend class PieceTableau::Plateau;

		inline static shared_ptr<Piece> roi2 = nullptr;

	};
}




