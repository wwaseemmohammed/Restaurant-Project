
#pragma once
#include "ColdDrink.h"

class OrangeJuice : public ColdDrink {
public:
    string itemname() { return "Orange Juice"; }
    float price() { return 35.0f; }
};
