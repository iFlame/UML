#ifndef COMMANDE_H
#define COMMANDE_H
#include <map>
#include <string>
#include <sstream>
using namespace std;



class Commande
{
    public:
        Commande(string);


        Commande();
        static map<string,Commande*>& commande();
        virtual Commande* constructeurVirtuel();
        virtual void execute();
        static Commande* creerCommande(string);
    protected:
    private:
};

#endif // COMMANDE_H
