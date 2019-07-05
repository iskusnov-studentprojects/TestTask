#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <QObject>



class Transport
{
private:
    int maxspeed;
    int wheelsnumber;
    QString name;
public:
    Transport();
    QString getInfo();
    void setMaxSpeed(int maxspeed);
    void setWheelsNumber(int wheelsnumber);
    void setName(QString name);
    int getMaxSpeed();
    int getWheelsNumber();
    QString getName();
};

#endif // TRANSPORT_H
