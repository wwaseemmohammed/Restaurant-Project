
#pragma once
#include "Item.h"
#include "Bottle.h"

class ColdDrink : public item {
public:
    packing* packingtype() { return new Bottle(); }
};
