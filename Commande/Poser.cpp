#include "Poser.h"

Poser Poser::poser("x");
Poser::Poser(string x){
    Commande("POSER",this);
}

Commande* Poser::constructeurVirtuel(){
    robot->afficher();
    Poser* ava =new Poser(robot,lf);
    ava->setRobot(robot);
    return ava;
}


void Poser::execute(){
    objet=robot->getObjet();
    robot->poser();
}

void Poser::desexecute() {
    robot->saisir(objet);
}

