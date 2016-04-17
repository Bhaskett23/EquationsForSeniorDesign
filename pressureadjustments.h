#ifndef PRESSUREADJUSTMENTS_H
#define PRESSUREADJUSTMENTS_H
#include "createroomstructs.h"
#include <QVector>

class PressureAdjustments
{
public:
    PressureAdjustments();
    void AdjustForPressure(QVector<createRoomStructs::room> rooms);
private:
    int TotalPressure(QVector<createRoomStructs::room> rooms);
};

#endif // PRESSUREADJUSTMENTS_H
