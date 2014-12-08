#ifndef _AVANCER_H
#define _AVANCER_H
#include "Commande.h"


class Avancer : public Commande
{
    public:
//      Commande* constructeur(Robot* robot, int x, int y) const { return new Avancer(robot,x,y); }
        void execute();
        void desexecute();
        static Avancer avancer;
        Avancer(string x);
        Commande* constructeurVirtuel();
        Avancer(Robot* bot, LecteurFichier* lf) {Commande(bot,lf);} ;
        void setX(int);
        void setY(int);
        int StringToNumber ( const string& );
void test(){cout<<"avancer";}


    protected:
    private:

        int newX;
        int newY;
        int oldX;
        int oldY;
};

#endif // AVANCER_H
