#include "temperatureadjustments.h"

TemperatureAdjustments::TemperatureAdjustments()
{
}

int TemperatureAdjustments::GreatestWeight(QVector<createRoomStructs::room> rooms)
{
    //find the greatestWeight of the system
    int greatestWeight = 0;

    for (int i = 0; i < rooms.size(); ++i)
    {
        if (greatestWeight < rooms[i].weight)
        {
            greatestWeight = rooms[i].weight;
        }
    }

    return greatestWeight;
}

void TemperatureAdjustments::AdjustmentsForTemps(QVector<createRoomStructs::room> rooms)
{
    int highestWeight = GreatestWeight(rooms);

    //for each room open servos based on equation
    for (int i = 0; i < rooms.size(); ++i)
    {
        rooms[i].servoPosition = (40 * rooms[i].weight / highestWeight) + 60;
    }
}
