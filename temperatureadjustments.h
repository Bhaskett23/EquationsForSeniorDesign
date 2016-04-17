#ifndef TEMPERATUREADJUSTMENTS_H
#define TEMPERATUREADJUSTMENTS_H

#include "createroomstructs.h"
#include <QVector>

class TemperatureAdjustments
{
public:
    TemperatureAdjustments();
    void AdjustmentsForTemps(QVector<createRoomStructs::room> rooms);

private:
    int GreatestWeight(QVector<createRoomStructs::room> rooms);
};

#endif // TEMPERATUREADJUSTMENTS_H
