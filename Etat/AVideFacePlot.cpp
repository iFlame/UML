#include "AVideFacePlot.h"
using namespace std;

AVideFacePlot::AVideFacePlot() {}
AVideFacePlot * AVideFacePlot::_singletonInst = new AVideFacePlot();
AVideFacePlot * AVideFacePlot::getInstance() {
    return _singletonInst;
}


EtatRobot* AVideFacePlot::tourner(){
    return AVide::getInstance();
}

EtatRobot* AVideFacePlot::evaluerPlot(){
    return AVideFacePlot::getInstance();
}

EtatRobot* AVideFacePlot::saisir(){
    return EnChargeFacePlot::getInstance();
}
EtatRobot* AVideFacePlot::figer() {
    Figer::setEtat(AVideFacePlot::getInstance());
    return Figer::getInstance();
}


/**
* Affichage de l'état AVideFacePlot.
*/
void AVideFacePlot::afficher() const{
    cout << "Le robot est dans l'etat a vide face a plot." << endl;
}

