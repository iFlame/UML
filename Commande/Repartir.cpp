#include "Repartir.h"

Repartir Repartir::repartir("x");
Repartir::Repartir(string x){
    Commande("REPARTIR",this);
}

Commande* Repartir::constructeurVirtuel(){
    robot->afficher();
    Repartir* ava =new Repartir(robot,lf);
    ava->setRobot(robot);
    return ava;
}


void Repartir::execute(){
    robot->repartir();
}

void Repartir::desexecute() {
    robot->figer();
}
