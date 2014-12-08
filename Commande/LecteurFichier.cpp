#include "LecteurFichier.h"
#include <algorithm>

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
