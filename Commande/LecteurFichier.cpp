#include "LecteurFichier.h"
#include <algorithm>
#include "Commande.h"
LecteurFichier::LecteurFichier(string nomFichier, Robot* rob) : flux(new ifstream(nomFichier.c_str(),ios::in)),robot(rob){commande=new Commande(robot,this);}
LecteurFichier::LecteurFichier(istream* flux, Robot* rob) : flux(flux), robot(rob){commande=new Commande(robot,this);}
void LecteurFichier::execute(){
    if (flux){
        string ligne;
        Commande* commandeAExec;
        while(getline(*flux,ligne))  // tant que l'on peut mettre la ligne dans "contenu"
        {
            cout<<ligne<<endl;
            transform(ligne.begin(), ligne.end(),ligne.begin(), ::toupper);
            istringstream iss(ligne, istringstream::in);
            iss>>arg;
            iss>>arg2;
            iss>>arg3;

            commandeAExec=commande->creerCommande(arg);// on l'affiche

            commandeAExec->execute();
            listeCommande.push(commandeAExec);
        }
    }

}
