#ifndef ENCHARGE_H
#define ENCHARGE_H
#include <iostream>
#include "EnRoute.h"

using namespace std;

class EnCharge : public EnRoute
{
private:
    EnCharge();

    static EnCharge * _singletonInst;
    EnCharge(EnCharge const&);



public:
    static EnCharge * getInstance();
    EtatRobot* tourner();
    void afficher() const;
};

#endif
