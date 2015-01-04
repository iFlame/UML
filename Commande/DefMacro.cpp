#include "DefMacro.h"


DefMacro DefMacro::defMacro("x");
DefMacro::DefMacro(string x){
    Commande("DEFMACRO",this);
}

Commande* DefMacro::constructeurVirtuel(){
    robot->afficher();
    DefMacro* ava =new DefMacro(robot,lf);
    ava->setRobot(robot);
    ava->setNomMacro(lf->arg2);
    ava->setMacro(lf->macro);
    return ava;
}
void DefMacro::setNomMacro(string x){
    nomMacro=x;
}
void DefMacro::setMacro(istream* x){
    macro=x;
}
void DefMacro::execute(){
    listeMacro()[nomMacro]=macro;
}

void DefMacro::desexecute() {
    //lf->desexecute(listeMacro()[macro]);

}
