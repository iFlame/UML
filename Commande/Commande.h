#ifndef COMMANDE_H
#define COMMANDE_H
#include <map>
#include <string>
using namespace std;



class Commande
{
    public:
        Commande();
        map<string,Commande> commande;
        virtual void execute();
        Commande* creerCommande(string);
    protected:
    private:
};

#endif // COMMANDE_H
