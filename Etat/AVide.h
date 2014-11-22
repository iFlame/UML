#ifndef AVIDE_H
#define AVIDE_H
#include <iostream>
#include "EnRoute.h"
using namespace std;

class AVide : public EnRoute {

public:
    EtatRobot* tourner();
    void afficher() const;
    static AVide* getInstance();

private:
    AVide();
    static AVide * _singletonInst;
    AVide(AVide const&);


};

#endif
