#ifndef FIGER_H
#define FIGER_H
#include <iostream>
#include "EtatRobot.h"

using namespace std;

class Figer : public EtatRobot
{
public:
    static EtatRobot* etatPrecedant;
    EtatRobot* repartir();
    void afficher() const;
    static Figer* getInstance();
    static void setEtat(EtatRobot* );
private:
    Figer();
    static Figer * _singletonInst;
};

#endif
