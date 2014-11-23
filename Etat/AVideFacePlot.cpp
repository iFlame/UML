#include "AVideFacePlot.hpp"
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
    cout << "Robot dans l'état à vide face à plot." << endl;
}

