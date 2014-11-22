#include "EnCharge.h"
using namespace std;

EnCharge::EnCharge() {}
EnCharge * EnCharge::_singletonInst = new EnCharge();
EnCharge * EnCharge::getInstance() {
    return _singletonInst;
}

EtatRobot* EnCharge::tourner(){
    return EnCharge::getInstance();
}


/**
* Affichage de l'état EnCharge.
*/
void EnCharge::afficher() const{
    cout << "Robot dans l'état en charge." << endl;
}
