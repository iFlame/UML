#ifndef LECTEURFICHIER_H
#define LECTEURFICHIER_H
#include <iostream>
#include <fstream>
#include <string>
#include "../Outil/Stack.h"
#include "../BaseRobot/Robot.h"

using namespace std;
class Commande;
class LecteurFichier
{
    private:
        Robot* robot;
        istream* flux;
        Stack<Commande*> listeCommande;
        Commande* commande;
    public:
        string arg;
        string arg2;
        string arg3;
        LecteurFichier(string nomFichier, Robot* rob);
        LecteurFichier(istream* flux, Robot* rob);
        void execute(istream*);
        void execute();
        void desexecute();

    protected:
};

#endif
