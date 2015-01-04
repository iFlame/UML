#ifndef LECTEURFICHIER_H
#define LECTEURFICHIER_H
#include "Invocateur.h"
#include <iostream>
#include <fstream>
#include <string>
#include "../Outil/Stack.h"
#include "../BaseRobot/Robot.h"

using namespace std;
class Commande;
class LecteurFichier : public Invocateur
{
    private:
        Robot* robot;
        istream* flux;
        Stack<Commande*> listeCommande;
        Commande* commande;
    public:
        LecteurFichier(string nomFichier, Robot* rob);
        LecteurFichier(istream* flux, Robot* rob);
        void execute(istream*);
        void execute();
        void desexecute();
    protected:
};

#endif
