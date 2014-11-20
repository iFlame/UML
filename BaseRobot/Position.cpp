//=======================================================================
// Basic C++: La classe Position
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Position.cpp
//=======================================================================

#include "Position.h"
using namespace std;

/**
 * Constructeur de la classe position qui prend deux paramètre x et y initialiser à 0 par défaut.
 */
Position::Position(int x, int y): x(x), y(y) {}

// Getter de X
int Position::getX() {
    return x;
}

// Getter de Y
int Position::getY() {
    return y;
}

// Setter de X
void Position::setX(int newX) {
    x = newX;
}

// Setter de Y
void Position::setY(int newY) {
    y = newY;
}
