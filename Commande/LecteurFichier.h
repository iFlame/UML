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
        Stack<Commande> listeCommande;
    public:
        LecteurFichier(string nomFichier) : flux(new ifstream(nomFichier.c_str(),ios::in)){}
        LecteurFichier(istream* flux=&cin) : flux(flux){}
        void execute();
        void desexecute();

    protected:
};

#endif
