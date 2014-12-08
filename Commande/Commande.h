#ifndef COMMANDE_H
#define COMMANDE_H
#include <map>

using namespace std;



class Commande
{
    public:
        string arg;
        string arg2:
        string arg3;

        Commande();
        static map<string,Commande*>& commande();
        virtual void execute();
        Commande* creerCommande(string);
    protected:
    private:
};

#endif // COMMANDE_H
