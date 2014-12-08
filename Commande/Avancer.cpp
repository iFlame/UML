#include "Avancer.h"
Avancer Avancer::avancer("x");
Avancer::Avancer(string x){
    Commande("AVANCER");
}
Commande* constructeurVirtuel(){
    return new Avancer();
}


void Avancer::execute(){
    oldX = robot->getPosition()->getX();
    oldY = robot->getPosition()->getY();
    robot->avancer(newX,newY);
}

void Avancer::desexecute() {
    robot->avancer(oldX,oldY);
}
