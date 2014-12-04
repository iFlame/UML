#include "LecteurFichier.h"

void LecteurFichier::execute(){
    string commande1, commande2, commande3;
    if (flux){
        string ligne;
        while(flux->getline(ligne))  // tant que l'on peut mettre la ligne dans "contenu"
        {
                cout << ligne << endl;  // on l'affiche
        }
    }

}
