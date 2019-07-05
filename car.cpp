#include "car.h"
#include "random.h"

Car::Car()
{
    setName("автомобиль");
    setWheelsNumber(4);
    setMaxSpeed(150);
    setMaxSpeed(Random::getInstance().getRand()->bounded(15,36)*10);
}
