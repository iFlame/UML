#ifndef ENCHARGE_H
#define ENCHARGE_H
#include <iostream>
#include "EnRoute.h"

using namespace std;

class EnCharge : public EnRoute
{
private:


public:
    EnCharge();
    EtatRobot* tourner();
    void afficher() const;
};

#endif
