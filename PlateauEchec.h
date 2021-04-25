#ifndef PLATEAUECHEC_H
#define PLATEAUECHEC_H

#include <QMainWindow>
#include <QIcon>
#include "Ajout.h"
#include "PieceTableau.h"
#include "Roi.h"
#include "Cavalier.h"
#include "Fou.h"
#include <qtablewidget.h>


QT_BEGIN_NAMESPACE
namespace Ui { class PlateauEchec; }
QT_END_NAMESPACE

class PlateauEchec : public QMainWindow
{
    Q_OBJECT

public:
    PlateauEchec(QWidget *parent = nullptr);
    ~PlateauEchec();

public slots:
    void mouvement(int x, int y);

    void resizeEvent(QResizeEvent*);


private:

    void couleurSelection(int x, int y);
    bool caseNoir(Position position);
    void emphaseCaseDeplacement(int x, int y);
    Ui::PlateauEchec *ui;
    Position positionAvant;
    bool premierClic = true;

    //Initialisation des pièces
    shared_ptr<Piece> roiBlanc = Roi::getInstanceRoi(Couleur::blanc);
    shared_ptr<Piece> roiNoir  = Roi::getInstanceRoi(Couleur::noir);

    shared_ptr<Piece> cavalierNoirG  = Cavalier::getInstanceCavalierGauche(Couleur::noir);
    shared_ptr<Piece> cavalierBlancG = Cavalier::getInstanceCavalierGauche(Couleur::blanc);

    shared_ptr<Piece> fouNoirD = Fou::getInstanceFouDroite(Couleur::noir);
    shared_ptr<Piece> fouBlancD = Fou::getInstanceFouDroite(Couleur::blanc);
    Plateau* chessBoard = Plateau::getInstancePlateau();
    vector<Position> listeBrushRouge;
    void remettreBrushAvant();

};
#endif // PLATEAUECHEC_H
