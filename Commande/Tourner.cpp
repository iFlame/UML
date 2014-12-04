#include "Tourner.h"

void Tourner::execute(){
    oldDirection = robot->getDirection();
    robot->tourner(direction);
}

void Tourner::desexecute() {
    robot->tourner(oldDirection);
}

