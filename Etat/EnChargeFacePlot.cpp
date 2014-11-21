#include "EnChargeFacePlot.h"
#include "AVideFacePlot.h"

using namespace std;


EnChargeFacePlot::EnChargeFacePlot()
{
    //ctor
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

EtatRobot* EnChargeFacePlot::poser() {
    return AVideFacePlot::getInstance();
}
