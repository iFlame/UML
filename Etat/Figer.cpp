#include "Figer.h"
using namespace std;

Figer::Figer() {}
Figer * Figer::_singletonInst = new Figer();
Figer * Figer::getInstance() {
    return _singletonInst;
}
EtatRobot* Figer::etatPrecedant=Figer::getInstance();
void Figer::setEtat(EtatRobot* nouvelleEtat){
    etatPrecedant=nouvelleEtat;
}

EtatRobot* Figer::repartir(){
    return etatPrecedant;
}
/**
* Affichage de l'état Figer.
*/
void Figer::afficher() const{
    cout << "Robot dans l'état figer." << endl;
}
