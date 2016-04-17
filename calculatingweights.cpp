#include "calculatingweights.h"

calculatingweights::calculatingweights(){}

void calculatingweights::CalculatingTheWeights(QVector<createRoomStructs::room> rooms)
{
    //calculates the base weights of all rooms
    for(int i = 0; i < rooms.size(); i++)
    {
        rooms[i].weight = rooms[i].prefTemp - rooms[i].currTemp;
    }

    //count number of rooms that have a diff of one
    int numberOfDiffsThatAreOne = 0;
    int numberOfRoomsWithThermostat = 0;
    for(int i = 0; i <= rooms.size() - 1; i++)
    {
        //check if room has a weight of one and is not in room with thermostat
        if(1 == rooms[i].weight && !rooms[i].withThermostat)
        {
            numberOfDiffsThatAreOne++;
        }
        else
        {
            //otherwise it is a room with a thermostat
            numberOfRoomsWithThermostat++;
        }
    }

    //check if that number of rooms with diff is all rooms that don't have a thermostat in them
    if(numberOfDiffsThatAreOne == rooms.size()- numberOfRoomsWithThermostat)
    {
        //if all rooms are a diff of one increase the weight of the rooms with the thermostat in them
        for(int i = 0; i < rooms.size(); i++)
        {
            if(rooms[i].withThermostat)
            {
                rooms[i].weight += 5;
            }
        }
    }
    //other wise go through all the rooms again and increase weight in all
    //rooms that are not in the room with the thrermostat or in the thermostat and have a diff of 11 or more
    else
    {
        for(int i = 0; i < rooms.size(); i++)
        {
            if(rooms[i].withThermostat)
            {
                if(rooms[i].weight > 10)
                {
                    rooms[i].weight += 5;
                }
            }
            else
            {
                rooms[i].weight += 5;
            }
        }
    }
}
