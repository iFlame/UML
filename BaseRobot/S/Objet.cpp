#include "Objet.h"
/**
 * Constructeur de la classe Objet, qui prend uniquement un poids en paramètre.
 */
Objet::Objet(int poids):poids(poids)
{

}
/**
 * Méthode getPoids qui retourne le poids de l'objet.
 */
int Objet::getPoids() {
    return poids;
}
