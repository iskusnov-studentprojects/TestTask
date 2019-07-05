#include "transport.h"

Transport::Transport(){}

QString Transport::getInfo()
{
    QString info = QString("Наименование транспорта: " + this->name + "\n" +
                           "Кол-во колес: %1\n" +
                           "Максимальная скорость: %2км\\ч\n").arg(this->wheelsnumber).arg(this->maxspeed);
    return info;
}

void Transport::setName(QString name)
{
    this->name = name;
}

void Transport::setMaxSpeed(int maxspeed)
{
    this->maxspeed = maxspeed;
}

void Transport::setWheelsNumber(int wheelsnumber)
{
    this->wheelsnumber = wheelsnumber;
}

QString Transport::getName()
{
    return name;
}

int Transport::getWheelsNumber()
{
    return wheelsnumber;
}

int Transport::getMaxSpeed()
{
    return maxspeed;
}
