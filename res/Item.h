
#pragma once
#include <string>
#include "Packing.h"
using namespace std;

class item {
protected:
    bool isPacking;
public:
    item() : isPacking(true) {}
    virtual ~item() {}
    void setPackingChoice(bool choice) { isPacking = choice; }
    bool getPackingChoice() const { return isPacking; }
    virtual string itemname() = 0;
    virtual packing* packingtype() = 0;
    virtual float price() = 0;
};
