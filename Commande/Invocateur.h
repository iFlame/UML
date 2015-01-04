#ifndef INVOCATEUR_H
#define INVOCATEUR_H
#include <fstream>
#include <string>
#include <iostream>

using namespace std;


class Invocateur
{
    public:
        Invocateur();
        string arg;
        string arg2;
        string arg3;
        string arg4;
        string arg5;

        istringstream* macro;
        virtual void execute(istream*);
        virtual void execute();
        virtual void desexecute();

    protected:
    private:
};

#endif // INVOCATEUR_H
