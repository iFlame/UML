#include "Objet.h"
/**
 * Constructeur de la classe Objet, qui prend uniquement un poids en param�tre.
 */
Objet::Objet(int poids):poids(poids)
{

}
/**
 * M�thode getPoids qui retourne le poids de l'objet.
 */
int Objet::getPoids() {
    return poids;
}
