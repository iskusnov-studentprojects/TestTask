#include "motorbike.h"
#include "random.h"

Motorbike::Motorbike()
{
    setName("мотоцикл");
    setWheelsNumber(2);
    setMaxSpeed(Random::getInstance().getRand()->bounded(16,26)*10);
}
