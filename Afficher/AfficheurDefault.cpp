#include "AfficheurDefault.h"

AfficheurDefault::AfficheurDefault(Robot* robot)
{
    this->robot=robot;
}

void AfficheurDefault::afficher(){
    cout<<"L'ordre donne au robot etait : " <<robot->getOrdre()<<"."<<endl;
    robot->getEtat()->afficher();
    cout<<"Le robot est a la position :"<< endl <<"X : "<<robot->getPosition()->getX()<<endl<<"Y : "<<robot->getPosition()->getY()<<endl;
    cout<<"Sa direction est : "<<robot->getDirection()<<endl;
    if (robot->getObjet()!=NULL){
        cout<<"Le robot tient un objet de poids "<<robot->getObjet()->getPoids()<<endl;
    }
    else{
        cout<<"Le robot ne tient pas d'objet"<<endl;
    }
    if (robot->getPlot()!=NULL){
        cout<<"Le robot ce tient devant un plot de taille "<<robot->getPlot()->getHauteur()<<endl;
    }
    else{
        cout<<"Le robot ne ce tient pas devant un plot"<<endl;
    }
}

