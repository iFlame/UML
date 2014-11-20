#include "Robot.h"

Robot::Robot()
{
    etat=new EtatRobot();
    this->direction="est";
    pos=new Position(0,0);
}
void Robot::tourner(string direction)
{
    try {
       //etat->EtatRobot.tourner()
        if(direction.compare("est")||direction.compare("nord")||direction.compare("ouest")||direction.compare("sud")){
            this->direction=direction;
        }
        throw(8);
    } catch (int i) {
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
