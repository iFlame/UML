#include "Commande.h"
#include <algorithm>

Commande::Commande()
{
   // commande["AVANCER"];
}
void Commande::execute(){}

Commande* Commande::creerCommande(string comm){
    transform(comm.begin(), comm.end(),comm.begin(), ::toupper);
    istringstream iss(comm, istringstream::in);
    iss>>arg;
    iss>>arg2;
    iss>>arg3;
    return commande[arg];
}
