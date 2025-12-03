
#pragma once
#include "Burger.h"

class VegBurger : public Burger {
public:
    string itemname() { return "Veg Burger"; }
    float price() { return 25.0f; }
};
