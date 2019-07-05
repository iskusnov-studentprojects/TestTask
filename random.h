#ifndef RANDOM_H
#define RANDOM_H

#include <QRandomGenerator>


//Singlton для корректной работы рандомайзера
class Random
{
private:
    QRandomGenerator* rand;
    Random();
    ~Random();
public:
    static Random& getInstance();
    QRandomGenerator* getRand();
};

#endif // RANDOM_H
