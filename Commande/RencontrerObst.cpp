#include "RencontrerObst.h"

RencontrerObst RencontrerObst::rencontrerObst("x");
RencontrerObst::RencontrerObst(string x){
    Commande("RENCONTREROBST",this);
}

Commande* RencontrerObst::constructeurVirtuel(){
    robot->afficher();
    RencontrerObst* ava =new RencontrerObst(robot,lf);
    ava->setRobot(robot);
    ava->setHauteur(StringToNumber(lf->arg2));

    return ava;
}
void RencontrerObst::setHauteur(int i){
    hauteur=i;
}

void RencontrerObst::execute(){
    robot->rencontrerPlot(new Plot(hauteur));
}

void RencontrerObst::desexecute() {

}

int RencontrerObst::StringToNumber ( const string &Text ){
	stringstream ss(Text);
	int result;
	return ss >> result ? result : 0;
}
