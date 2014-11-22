#ifndef ELEMENTAREPRESENTER_H
#define ELEMENTAREPRESENTER_H
#include "Afficheur.h"

class ElementARepresenter
{
    public:
        ElementARepresenter();
        void attacherAfficheur(Afficheur*);
        void detacherAfficheur();
        void notifier();
    protected:
    private:
};

#endif
