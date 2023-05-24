#ifndef LABA4_FINAL_IPHYSOBJECT_H
#define LABA4_FINAL_IPHYSOBJECT_H

#include "CVector2D.h"

class IPhysObject {
public:
    virtual double mass() = 0;

    virtual CVector2D position() = 0;

    virtual bool operator==(IPhysObject &ob) = 0;

    virtual bool operator<(IPhysObject &ob) = 0;
};

#endif //LABA4_FINAL_IPHYSOBJECT_H
