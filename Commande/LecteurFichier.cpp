#include "LecteurFichier.h"

void LecteurFichier::execute(){
    if (flux){
        string ligne;
        Commande* commandeAExec;
        while(getline(*flux,ligne))  // tant que l'on peut mettre la ligne dans "contenu"
        {
                commandeAExec=commande->creerCommande(ligne);// on l'affiche
                commandeAExec->execute();
                listeCommande.push(commandeAExec);
        }
    }

}
