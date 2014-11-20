#include "Robot.h"

Robot::Robot()
{
    this->direction="est";
    pos=new Position(0,0);
}
void Robot::tourner(string direction)
{
    if(direction.compare("est")||direction.compare("nord")||direction.compare("ouest")||direction.compare("sud"))
        this->direction=direction;
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
