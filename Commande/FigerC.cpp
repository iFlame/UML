#include "FigerC.h"
FigerC FigerC::figer("x");
FigerC::FigerC(string x){
    Commande("FIGER",this);
}

Commande* FigerC::constructeurVirtuel(){
    robot->afficher();
    FigerC* ava =new FigerC(robot,lf);
    ava->setRobot(robot);
    return ava;
}


void FigerC::execute(){
    robot->figer();
}

void FigerC::desexecute() {
    robot->repartir();
}
