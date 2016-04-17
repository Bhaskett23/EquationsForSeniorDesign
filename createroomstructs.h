#ifndef CREATEROOMSTRUCTS_H
#define CREATEROOMSTRUCTS_H

#include "QString"
#include <QVector>

class createRoomStructs
{
public:
    createRoomStructs();
    struct room
    {
        int nodeId;
        QString name;
        int currTemp;
        int prefTemp;
        int servoPosition;
        int pressure;
        int fanSpeed;
        bool withThermostat;
        bool inUse;
        QString differenceType;
        int weight;
        bool hasFan;
        bool fanRecomendation;
    };

    room roomVector;

    QVector<room> roomVectors;

    void BuildRoomVector(int nodeId, QString name, int servoPosition, int pressure, int fanSpeed, bool withThermostat, QString differenceType, int weight, bool hasFan);

    void BuildRoomVectors(int numberOfVectors);
};

#endif // CREATEROOMSTRUCTS_H
