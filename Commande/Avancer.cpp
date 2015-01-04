#include "Avancer.h"
Avancer Avancer::avancer("x");
Avancer::Avancer(string x){
    Commande("AVANCER",this);
}

Commande* Avancer::constructeurVirtuel(){
    robot->afficher();
    Avancer* ava =new Avancer(robot,lf);
    ava->setRobot(robot);
    ava->setX(StringToNumber(lf->arg2));
    ava->setY(StringToNumber(lf->arg3));

    return ava;
}

void Avancer::execute(){
    oldX = robot->getPosition()->getX();
    oldY = robot->getPosition()->getY();
    robot->avancer(newX,newY);
}

void Avancer::desexecute() {
    robot->avancer(oldX,oldY);
}

void Avancer::setX(int i){
    newX=i;
}
void Avancer::setY(int i){
    newY=i;
}

int Avancer::StringToNumber ( const string &Text ){
	stringstream ss(Text);
	int result;
	return ss >> result ? result : 0;
}
