#include <iostream>

using namespace std;

#include "BaseRobot/Plot.hpp"
#include "BaseRobot/Robot.hpp"
#include "BaseRobot/Position.hpp"

int main() {
    cout << "Hello, World!" << endl;

    cout << "Test plot :" << endl;
    Plot plot = Plot(15);
    cout << plot.getHauteur() << endl;

    cout << "Test Position" << endl;
    Position pos = Position();
    cout << pos.getX() << endl;
    cout << pos.getY() << endl;

    Robot robot=Robot();
    //robot.poser();
    robot.tourner('O');
    robot.getEtat()->afficher();
    cout<<robot.getDirection();
    return 0;

}
