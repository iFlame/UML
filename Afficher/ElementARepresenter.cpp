#include "ElementARepresenter.h"

ElementARepresenter::ElementARepresenter()
{
    afficheur=new Afficheur();
}
void ElementARepresenter::attacherAfficheur(Afficheur* afficheur){
    this->afficheur=afficheur;
}
void ElementARepresenter::detacherAfficheur(){
    this->afficheur=new Afficheur();
}
void ElementARepresenter::notifier(){
    afficheur->afficher();
}
