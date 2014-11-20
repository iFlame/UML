//=======================================================================
// Basic C++: La classe Plot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Plot.h
//=======================================================================

#ifndef _PLOT_H_
#define _PLOT_H_

#include <iostream>
using namespace std;

class Plot {

private:
    int hauteur;

public:
    Plot(int);
    int getHauteur();
};

#endif