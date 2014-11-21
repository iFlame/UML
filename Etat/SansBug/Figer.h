#ifndef FIGER_H
#define FIGER_H
#include <iostream>
#include "EtatRobot.h"

using namespace std;

class Figer : public EtatRobot
{
    public:
        Figer();
        EtatRobot* tourner();

    private:
};

#endif
