#include "scooter.h"
#include "random.h"

Scooter::Scooter()
{
    setName("самокат");
    setWheelsNumber(Random::getInstance().getRand()->bounded(2,4));
    setMaxSpeed(Random::getInstance().getRand()->bounded(4,7)*10);
}
