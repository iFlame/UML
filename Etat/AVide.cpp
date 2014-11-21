#include "AVide.h"
using namespace std;


/**
  * Cette méthode retourne l'état AVide.
  */
/*
AVide& AVide::getInstance() {
    return instance;
}
*/

/**
 * Constructeur de la classe AVide qui implémente le constructeur de la classe EnRoute.
 */
AVide::AVide() : EnRoute() {}


EtatRobot* AVide::tourner(){
    return this;
}

/**
  * Affichage de l'état AVide.
  */
void AVide::afficher() const{
    cout << "Robot dans l'état à vide." << endl;
}




