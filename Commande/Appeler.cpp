#include "Appeler.h"


Appeler Appeler::appeler("x");
Appeler::Appeler(string x){
    Commande("APPELER",this);
}

Commande* Appeler::constructeurVirtuel(){
    robot->afficher();
    Appeler* ava =new Appeler(robot,lf);
    ava->setRobot(robot);
    ava->setMacro(lf->arg2);

    return ava;
}
void Appeler::setMacro(string x){
    macro=x;
}
void Appeler::execute(){
    lf->execute(listeMacro()[macro]);
}

void Appeler::desexecute() {
    //lf->desexecute(listeMacro()[macro]);

}


