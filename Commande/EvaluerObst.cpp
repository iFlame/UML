#include "EvaluerObst.h"

EvaluerObst EvaluerObst::evaluerObst("x");
EvaluerObst::EvaluerObst(string x){
    Commande("EVALUEROBST",this);
}

Commande* EvaluerObst::constructeurVirtuel(){
    robot->afficher();
    EvaluerObst* ava =new EvaluerObst(robot,lf);
    ava->setRobot(robot);
    return ava;
}


void EvaluerObst::execute(){
    robot->evaluerPlot();
}

void EvaluerObst::desexecute() {
}

