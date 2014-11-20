#include "AVide.h"
using namespace std;


/**
  * Cette méthode retourne l'état AVide.
  */
AVide& AVide::getInstance() {
    if(instance != null) {
        return instance;
    } else {
        instance(AVide());
        return instance;
    }
}


EtatRobot* AVide::tourner(){
    return this;
}




