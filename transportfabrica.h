#ifndef TRANSPORTFABRICA_H
#define TRANSPORTFABRICA_H

#include "transport.h"

class TransportFabrica
{
public:
    TransportFabrica();
    Transport createMotorbike();
    Transport createScooter();
    Transport createCar();
    Transport createBus();
};

#endif // TRANSPORTFABRICA_H
