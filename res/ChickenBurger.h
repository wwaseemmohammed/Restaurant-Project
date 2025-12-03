
#pragma once
#include "Burger.h"

class ChickenBurger : public Burger {
public:
    string itemname() { return "Chicken Burger"; }
    float price() { return 50.5f; }
};
