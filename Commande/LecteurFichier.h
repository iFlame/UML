#ifndef LECTEURFICHIER_H
#define LECTEURFICHIER_H
#include <iostream>
#include <fstream>
#include <string>
#include "../Outil/Stack.h"
#include "Commande.h"
using namespace std;

class LecteurFichier
{
    private:
        istream* flux;
        Stack<Commande*> listeCommande;
        Commande* commande;
    public:
        string arg;
        string arg2;
        string arg3;
        LecteurFichier(string nomFichier) : flux(new ifstream(nomFichier.c_str(),ios::in)){commande=new Commande();}
        LecteurFichier(istream* flux=&cin) : flux(flux){commande=new Commande();}
        void execute();
        void desexecute();

    protected:
};

#endif
