#include "createroomstructs.h"
#include <iostream>
#include <QTextStream>


createRoomStructs::createRoomStructs()
{

}

void createRoomStructs::BuildRoomVector(int nodeId, QString name, int servoPosition, int pressure, int fanSpeed, bool withThermostat, QString differenceType, int weight, bool hasFan)
{
    roomVector.nodeId = nodeId;
    roomVector.name = name;
    roomVector.servoPosition = servoPosition;
    roomVector.pressure = pressure;
    roomVector.fanSpeed = fanSpeed;
    roomVector.withThermostat = withThermostat;
    roomVector.differenceType = differenceType;
    roomVector.weight = weight;
    roomVector.hasFan = hasFan;
}

void createRoomStructs::BuildRoomVectors(int numberOfVectors)
{
    int nodeId;
    QString name;
    int servoPosition;
    int pressure;
    int fanSpeed;
    bool withThermostat;
    QString differenceType;
    int weight;
    bool hasFan;

    std::cout << "display";

//    for(int i = 0; i <= numberOfVectors; i++)
//    {
 //       BuildRoomVector(nodeId, name, servoPosition, pressure, fanSpeed, withThermostat, differenceType, weight, hasFan);

//        roomVectors.append(roomVector);
//    }
}
