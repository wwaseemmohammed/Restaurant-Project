
#pragma once
#include "Item.h"
#include "Wrapper.h"

class Burger : public item {
public:
    packing* packingtype() { return new Wrapper(); }
};
