#include "EnCharge.hpp"
using namespace std;

EnCharge::EnCharge() {}
EnCharge * EnCharge::_singletonInst = new EnCharge();
EnCharge * EnCharge::getInstance() {
    return _singletonInst;
}

EtatRobot* EnCharge::tourner(){
    return EnCharge::getInstance();
}
EtatRobot* EnCharge::rencontrerPlot(){
    return EnChargeFacePlot::getInstance();
}
EtatRobot* EnCharge::avancer(){
    return EnCharge::getInstance();
}
EtatRobot* EnCharge::peser(){
    return EnCharge::getInstance();
}
EtatRobot* EnCharge::figer() {
    Figer::setEtat(EnCharge::getInstance());
    return Figer::getInstance();
}

/**
* Affichage de l'état EnCharge.
*/
void EnCharge::afficher() const{
    cout << "Robot dans l'état en charge." << endl;
}
