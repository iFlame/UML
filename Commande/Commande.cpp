#include "Commande.h"

Commande::Commande()
{

}

void Commande::execute(){}

Commande(string d){
    commande()[d]=this;
}

Commande* Commande::creerCommande(string comm){
    return Commande::commande()[comm]->constructeurVirtuel();
}

map<string,Commande*>& Commande::commande(){
    static map<string,Commande*>* commandeInscrite=new map<string,Commande*>;
    return *commandeInscrite;
}

Commande* Commande::constructeurVirtuel(){
    return new Commande();
}


