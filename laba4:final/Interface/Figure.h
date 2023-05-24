#ifndef LABA4_FINAL_FIGURE_H
#define LABA4_FINAL_FIGURE_H

#include "IDialogInitiable.h"
#include "IPrintable.h"
#include "BaseCObject.h"
#include "IPhysObject.h"
#include "IGeoFig.h"

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;


class Figure : public IPrintable, public BaseCObject, public IPhysObject, public IDialogInitiable, public IGeoFig{
public:
    Figure() = default;
};


#endif //LABA4_FINAL_FIGURE_H
