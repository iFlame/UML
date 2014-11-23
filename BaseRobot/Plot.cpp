//=======================================================================
// Basic C++: La classe Plot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Plot.cpp
//=======================================================================

using namespace std;

#include "Plot.h"

/**
 * Constructeur de la classe Plot, qui prend uniquement une hauteur en paramètre.
 */
Plot::Plot(int hauteur): hauteur(hauteur) {}

/**
 * Méthode getHauteur qui retourne la hauteur du plot.
 */
int Plot::getHauteur() {
    return hauteur;
}
