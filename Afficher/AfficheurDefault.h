#ifndef AFFICHEURDEFAULT_H
#define AFFICHEURDEFAULT_H
#include "Afficheur"
#include "../BaseRobot/Robot.h"


class AfficheurDefault : public Afficheur
{
    public:
        AfficheurDefault();
        virtual void afficher();

    protected:
    private:
};

#endif // AFFICHEURDEFAULT_H
