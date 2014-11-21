#include "AVideFacePlot.h"
using namespace std;

AVideFacePlot::AVideFacePlot() {}
AVideFacePlot * AVideFacePlot::_singletonInst = new AVideFacePlot();
AVideFacePlot * AVideFacePlot::getInstance() {
    cout<<"kouloukoukouloukoukoustachstach";
    return _singletonInst;
}


EtatRobot* AVideFacePlot::tourner(){
    cout<<"test";
    return new AVide();
}



/**
* Affichage de l'état AVideFacePlot.
*/
void AVideFacePlot::afficher() const{
    cout << "Robot dans l'état à vide face à plot." << endl;
}

