#ifndef AFFICHEURDEFAULT_H
#define AFFICHEURDEFAULT_H
#include "Afficheur.h"
#include <iostream>

class AfficheurDefault : public Afficheur
{
    public:
        //Robot* robot;
        AfficheurDefault();
        void afficher();

    protected:
    private:
};

#endif // AFFICHEURDEFAULT_H
