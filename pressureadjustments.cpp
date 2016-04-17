#include "pressureadjustments.h"

PressureAdjustments::PressureAdjustments()
{
}

int PressureAdjustments::TotalPressure(QVector<createRoomStructs::room> rooms)
{
    int summedPressure = 0;

    for (int i = 0; i < rooms.size(); ++i)
    {
        summedPressure += rooms[i].pressure;
    }

    return summedPressure;
}

void PressureAdjustments::AdjustForPressure(QVector<createRoomStructs::room> rooms)
{
    int totalPressure = TotalPressure(rooms);
    //check if the calculated pressure in the system is over a certain limit
    if (totalPressure > 60)
    {
        //check if the system has a fan in it
        //if one is found make it go full speed and open vent to full
        bool fanInSystem = false;
        for (int i = 0; i < rooms.size(); ++i)
        {
            if (rooms[i].hasFan)
            {
                rooms[i].fanSpeed = 50;
                rooms[i].servoPosition = 90;
                fanInSystem = true;
            }
        }

        //if no fan go through the vents and open the ones that have alot of pressure behind it
        if (!fanInSystem)
        {
            for (int i = 0; i < rooms.size(); ++i)
            {
                if (rooms[i].pressure > 20)
                {
                    rooms[i].servoPosition = 90;
                }
            }
        }
    }

    //have it go through for the rooms and any room that doesn't have a fan if the pressure is over a amount give recomendation that a fan be installed
    for (int i = 0; i < rooms.size(); ++i)
    {
        if (!rooms[i].hasFan
                && rooms[i].pressure > 20)
        {
            rooms[i].fanRecomendation = true;
        }
    }
}
