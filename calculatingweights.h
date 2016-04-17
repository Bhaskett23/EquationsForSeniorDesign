#ifndef CALCULATINGWEIGHTS_H
#define CALCULATINGWEIGHTS_H
#include "createroomstructs.h"
#include <QVector>

class calculatingweights
{
public:
    calculatingweights();
    void CalculatingTheWeights(QVector<createRoomStructs::room> rooms);
};

#endif // CALCULATINGWEIGHTS_H
