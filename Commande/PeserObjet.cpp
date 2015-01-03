#include "PeserObjet.h"
PeserObjet PeserObjet::peserObjet("x");
PeserObjet::PeserObjet(string x){
    Commande("PESEROBJET",this);
}

Commande* PeserObjet::constructeurVirtuel(){
    robot->afficher();
    PeserObjet* ava =new PeserObjet(robot,lf);
    ava->setRobot(robot);
    return ava;
}


void PeserObjet::execute(){
    robot->peser();
}

void PeserObjet::desexecute() {
}
