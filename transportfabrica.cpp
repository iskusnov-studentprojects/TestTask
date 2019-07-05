#include "transportfabrica.h"
#include "motorbike.h"
#include "scooter.h"
#include "car.h"
#include "bus.h"

TransportFabrica::TransportFabrica(){}

Transport TransportFabrica::createMotorbike()
{
    return Motorbike();
}

Transport TransportFabrica::createScooter()
{
    return Scooter();
}

Transport TransportFabrica::createCar()
{
    return Car();
}

Transport TransportFabrica::createBus()
{
    return Bus();
}
