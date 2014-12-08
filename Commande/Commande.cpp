#include "Commande.h"

Commande::Commande()
{

}

void Commande::execute(){}

Commande::Commande(string d){
    commande()[d]=this;
}

Commande* Commande::creerCommande(string comm){

    commande()[comm]->test();

    return Commande::commande()[comm]->constructeurVirtuel();
}

map<string,Commande*>& Commande::commande(){
    static map<string,Commande*>* commandeInscrite=new map<string,Commande*>;
    return *commandeInscrite;
}

Commande* Commande::constructeurVirtuel(){
    cout<<"llll";

    return new Commande();
}
void Commande::setRobot(Robot* robot){
    robot=robot;
}
void Commande::setLecteur(LecteurFichier* lecte){
    lf=lecte;
}
void Commande::test(){
cout<<"ici";}
