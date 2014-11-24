#include <iostream>

using namespace std;

#include "BaseRobot/Plot.h"
#include "BaseRobot/Robot.h"
#include "BaseRobot/Position.h"
#include "Afficher/AfficheurDefault.h"
int main() {

    cout << "Test plot :" << endl;
    Plot* plot = new Plot(15);
    cout << plot->getHauteur() << endl;

    cout << "Test Position" << endl;
    Position pos = Position();
    cout << pos.getX() << endl;
    cout << pos.getY() << endl;

    Objet* objet=new Objet(5);

    cout << "Test Robot" << endl;

    Robot* robot=new Robot();
    AfficheurDefault* affich=new AfficheurDefault(robot);
    robot->attacherAfficheur(affich);
    robot->tourner('O');
    robot->rencontrerPlot(plot);
    robot->evaluerPlot();
    robot->saisir(objet);
    robot->tourner('S');
    robot->figer();
    robot->repartir();
    return 0;

}
