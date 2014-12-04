#include "Avancer.h"


void Avancer::execute(){
    oldX = robot->getPosition()->getX();
    oldY = robot->getPosition()->getY();
    robot->avancer(newX,newY);
}

void Avancer::desexecute() {
    robot->avancer(oldX,oldY);
}
