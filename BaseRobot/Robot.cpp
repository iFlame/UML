#include "Robot.h"

Robot::Robot()
{
    etat=new AVide();
    this->direction="est";
    pos=new Position(0,0);
}
void Robot::tourner(string direction)
{
    try {
       etat=etat->tourner();
        if(direction.compare("est")||direction.compare("nord")||direction.compare("ouest")||direction.compare("sud")){
            this->direction=direction;
        }
    } catch (EtatRobot::WrongStatement) {
    }

}

void Robot::avancer(int x,int y)
{
    pos->setX(x);
    pos->setY(y);
}
void Robot::poser()
{
}
void Robot::peser()
{
}
void Robot::rencontrerPlot(Plot p)
{
}
void Robot::evaluerPlot()
{
}
void Robot::figer()
{
}
void Robot::repartir()
{
}
void Robot::afficher()
{
}
string Robot::getDirection(){
    return direction;
}
