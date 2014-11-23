#ifndef ELEMENTAREPRESENTER_H
#define ELEMENTAREPRESENTER_H
#include "Afficheur.h"
#include "AfficheurDefault.h"

class ElementARepresenter
{
    public:
        ElementARepresenter();
        Afficheur* afficheur;
        void attacherAfficheur(Afficheur*);
        void detacherAfficheur();
        void notifier();
    protected:
    private:
};

#endif
