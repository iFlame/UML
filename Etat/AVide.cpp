#include "AVide.h"
using namespace std;


/**
  * Cette méthode retourne l'état AVide.
  */

AVide::AVide() {}
AVide * AVide::_singletonInst = new AVide();
AVide * AVide::getInstance() {
    return _singletonInst;
}


/**
 * Constructeur de la classe AVide qui implémente le constructeur de la classe EnRoute.
 */


EtatRobot* AVide::tourner(){
    return AVide::getInstance();
}

/**
  * Affichage de l'état AVide.
  */
void AVide::afficher() const{
    cout << "Robot dans l'état à vide." << endl;
}




