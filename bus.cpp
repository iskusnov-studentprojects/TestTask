#include "bus.h"
#include "random.h"

Bus::Bus()
{
    setName("автобус");
    setWheelsNumber(Random::getInstance().getRand()->bounded(2,4)*2);
    setMaxSpeed(Random::getInstance().getRand()->bounded(10,19)*10);
}
