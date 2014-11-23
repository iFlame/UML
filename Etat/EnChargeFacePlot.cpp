#include "EnChargeFacePlot.hpp"
#include "AVideFacePlot.hpp"

using namespace std;



EnChargeFacePlot::EnChargeFacePlot() {}
EnChargeFacePlot * EnChargeFacePlot::_singletonInst = new EnChargeFacePlot();
EnChargeFacePlot * EnChargeFacePlot::getInstance() {
    return _singletonInst;
}

EtatRobot* EnChargeFacePlot::tourner(){
    return new EnChargeFacePlot;
}

/**
* Affichage de l'état EnChargeFacePlot.
*/
void EnChargeFacePlot::afficher() const{
    cout << "Robot dans l'état en charge face à plot." << endl;
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
