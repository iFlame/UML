#ifndef FIGER_H
#define FIGER_H
#include <iostream>
#include "EtatRobot.h"

using namespace std;

class Figer : public EtatRobot
{
public:
    EtatRobot* tourner();
    void afficher() const;
    static Figer* getInstance();


private:
    Figer();
    static Figer * _singletonInst;
    Figer(Figer const&);
};

#endif
