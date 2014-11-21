#ifndef AVIDE_H
#define AVIDE_H
#include <iostream>
#include "EnRoute.h"
using namespace std;

class AVide : public EnRoute {

public:
    AVide();
    EtatRobot* tourner();
    void afficher() const;
    static AVide& getInstance();

private:
    static AVide instance;
  //  AVide(const AVide&) {}
};

#endif
