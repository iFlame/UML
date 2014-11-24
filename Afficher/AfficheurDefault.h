#ifndef AFFICHEURDEFAULT_H
#define AFFICHEURDEFAULT_H
#include "Afficheur.h"
#include <iostream>
#include "../BaseRobot/Robot.h"

class AfficheurDefault : public Afficheur
{
    public:
        Robot* robot;
        AfficheurDefault(Robot*);
        void afficher();

    protected:
    private:
};

#endif // AFFICHEURDEFAULT_H
