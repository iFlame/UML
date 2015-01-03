#include "Saisir.h"

Saisir Saisir::saisir("x");
Saisir::Saisir(string x){
    Commande("SAISIR",this);
}

Commande* Saisir::constructeurVirtuel(){
    robot->afficher();
    Saisir* ava =new Saisir(robot,lf);
    ava->setRobot(robot);
    ava->setPoids(StringToNumber(lf->arg2));
    return ava;
}
void Saisir::setPoids(int i){
    poids=i;
}

void Saisir::execute(){
    robot->saisir(new Objet(poids));
}

void Saisir::desexecute() {
    robot->poser();
}
int Saisir::StringToNumber ( const string &Text ){
	stringstream ss(Text);
	int result;
	return ss >> result ? result : 0;
}

