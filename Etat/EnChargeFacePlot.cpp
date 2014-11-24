#include "EnChargeFacePlot.h"
#include "AVideFacePlot.h"

using namespace std;



EnChargeFacePlot::EnChargeFacePlot() {}
EnChargeFacePlot * EnChargeFacePlot::_singletonInst = new EnChargeFacePlot();
EnChargeFacePlot * EnChargeFacePlot::getInstance() {
    return _singletonInst;
}

EtatRobot* EnChargeFacePlot::tourner(){
    return EnCharge::getInstance();
}

/**
* Affichage de l'état EnChargeFacePlot.
*/
void EnChargeFacePlot::afficher() const{
    cout << "Le Robot dans l'etat en charge face a plot." << endl;
}
EtatRobot* EnChargeFacePlot::figer() {
    Figer::setEtat(EnChargeFacePlot::getInstance());
    return Figer::getInstance();
}
EtatRobot* EnChargeFacePlot::poser() {
    return AVideFacePlot::getInstance();
}
EtatRobot* EnChargeFacePlot::peser() {
    return EnChargeFacePlot::getInstance();
}
