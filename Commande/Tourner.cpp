#include "Tourner.h"

Tourner Tourner::tourner("x");
Tourner::Tourner(string x){
    Commande("TOURNER",this);
}

Commande* Tourner::constructeurVirtuel(){
    robot->afficher();
    Tourner* ava =new Tourner(robot,lf);
    ava->setRobot(robot);
    ava->setDir(StringToChar(lf->arg2));

    return ava;
}
void Tourner::setDir(char x) {
    direction=x;
}

void Tourner::execute(){
    oldDirection= robot->getDirection();
    robot->tourner(direction);
}

void Tourner::desexecute() {
    robot->tourner(oldDirection);

}
char Tourner::StringToChar ( const string &Text ){
	stringstream ss(Text);
	char result;
	return ss >> result ? result : 0;
}
