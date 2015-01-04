#ifndef DEFMACRO_H
#define DEFMACRO_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"
#include "../BaseRobot/Plot.h"
#include <fstream>



class DefMacro : public Commande
{
    public:
        void execute();
        void desexecute();
        static DefMacro defMacro;
        DefMacro(string x);
        Commande* constructeurVirtuel();
        DefMacro(Robot* bot, LecteurFichier* lf) {Commande(bot,lf);}
        void test(){cout<<"DefMacro";}
        void setMacro(istream*);
        void setNomMacro(string);

    protected:
    private:
        istream* macro;
        string nomMacro;

};
#endif
