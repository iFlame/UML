//=======================================================================
// Basic C++: La classe Objet
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Objet.cpp
//=======================================================================

#include "Objet.hpp"
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
