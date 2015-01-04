#include "Commande.h"

Commande::Commande()
{

}

void Commande::execute(){}

Commande::Commande(string d,Commande* objet){
    commande()[d]=objet;
    cout<<d<<endl;
}

Commande* Commande::creerCommande(string comm){
    return Commande::commande()[comm]->constructeurVirtuel();
}

map<string,Commande*>& Commande::commande(){
    static map<string,Commande*>* commandeInscrite=new map<string,Commande*>;
    return *commandeInscrite;
}
map<string,istream*>& Commande::listeMacro(){
    static map<string,istream*>* macroInscrite=new map<string,istream*>;
    return *macroInscrite;
}

Commande* Commande::constructeurVirtuel(){
    return new Commande();
}
void Commande::setRobot(Robot* robotn){
    robot=robotn;
}
void Commande::setLecteur(Invocateur* lecte){
    lf=lecte;
}
void Commande::test(){
    cout<<"ici";
}
