#include "LecteurFichier.h"
#include <algorithm>
#include "Commande.h"
LecteurFichier::LecteurFichier(string nomFichier, Robot* rob) : flux(new ifstream(nomFichier.c_str(),ios::in)),robot(rob){commande=new Commande(robot,this);}
LecteurFichier::LecteurFichier(istream* flux, Robot* rob) : flux(flux), robot(rob){commande=new Commande(robot,this);}
void LecteurFichier::execute(istream* fluxx){
    if (fluxx){
        string ligne;
        Commande* commandeAExec;
        while(getline(*fluxx,ligne))  // tant que l'on peut mettre la ligne dans "contenu"
        {
            transform(ligne.begin(), ligne.end(),ligne.begin(), ::toupper);
            cout<<ligne<<endl;
            istringstream iss(ligne, istringstream::in);
            string argz, argg;
            iss>>argz;
            iss>>argg;
            if (argz.compare("DEFMACRO")==0){
                    string x;
                while(arg3.compare("FINMACRO")!=0&&getline(*flux,ligne))  // tant que l'on peut mettre la ligne dans "contenu"
               {
                    istringstream iss(ligne, istringstream::in);
                   arg3=arg5=arg4="";
                    iss>>arg3;
                    iss>>arg5;
                    iss>>arg4;
                    x=x+arg3+" "+arg5+" "+arg4+"\n";
               }
                    macro=new istringstream(x);
                }
            else{
                iss>>arg3;
                }
            commandeAExec=commande->creerCommande(argz);// on l'affiche
            commandeAExec->execute();
        }
    }

}
void LecteurFichier::execute(){
    if (flux){
        string ligne;
        Commande* commandeAExec;
        while(getline(*flux,ligne))  // tant que l'on peut mettre la ligne dans "contenu"
        {
            transform(ligne.begin(), ligne.end(),ligne.begin(), ::toupper);
            cout<<ligne<<endl;

            istringstream iss(ligne, istringstream::in);
            iss>>arg;
            if (arg.compare("APPELER")==0){
                iss>>arg4;
            }
            else{
                iss>>arg2;
                if (arg.compare("DEFMACRO")==0){
                    string x;
                    while(arg3.compare("FINMACRO")!=0&&getline(*flux,ligne))  // tant que l'on peut mettre la ligne dans "contenu"
                    {
                        istringstream iss(ligne, istringstream::in);
                        arg3=arg5=arg4="";
                        iss>>arg3;
                        iss>>arg5;
                        iss>>arg4;
                        if (arg3.compare("FINMACRO")!=0)
                        x=x+arg3+" "+arg5+" "+arg4+"\n";
                    }
                    macro=new istringstream(x);
                }
                else{
                    iss>>arg3;
                }
            }
            commandeAExec=commande->creerCommande(arg);// on l'affiche
            commandeAExec->execute();
            listeCommande.push(commandeAExec);
        }
    }
}
void LecteurFichier::desexecute(){

}

