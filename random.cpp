#include "random.h"

Random::Random()
{
    rand = new QRandomGenerator;
}

Random::~Random()
{
    delete rand;
}

Random& Random::getInstance(){
    static Random instance;
    return instance;
}

QRandomGenerator* Random::getRand(){
    return rand;
}
