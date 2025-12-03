
#pragma once
#include "Meal.h"
#include "VegBurger.h"
#include "ChickenBurger.h"
#include "Chat.h"
#include "OrangeJuice.h"
#include <iostream>
using namespace std;

class MealBuilder {
public:
    bool handlePacking(item* it, const string& itemName = "") {
        char askp;
        if (itemName.empty()) cout << "Packing? (y/n): ";
        else cout << "Packing for " << itemName << "? (y/n): ";
        cin >> askp;
        bool choice = (askp == 'y' || askp == 'Y');
        it->setPackingChoice(choice);
        return choice;
    }

    Meal prepareVegMeal() {
        Meal meal;
        VegBurger* v = new VegBurger();
        handlePacking(v, "Veg Burger");
        meal.addItem(v);
        Chat* c = new Chat();
        handlePacking(c, "Chat");
        meal.addItem(c);
        return meal;
    }

    Meal prepareNonVegMeal() {
        Meal meal;
        ChickenBurger* c = new ChickenBurger();
        handlePacking(c, "Chicken Burger");
        OrangeJuice* o = new OrangeJuice();
        handlePacking(o, "Orange Juice");
        meal.addItem(o);
        return meal;
    }
};
