//=======================================================================
// Basic C++: La classe Position
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Position.h
//=======================================================================

#ifndef _POSITION_H_
#define _POSITION_H_

#include <iostream>
using namespace std;

class Position {

private:
    int x;
    int y;

public:
    Position(int = 0, int = 0);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
};

#endif