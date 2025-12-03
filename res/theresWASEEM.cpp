
#include "MealBuilder.h"
#include <iostream>
using namespace std;

int main() {
    MealBuilder builder;

    cout << "\nVeg Meal\n";
    Meal vegMeal = builder.prepareVegMeal();
    vegMeal.showItems();

    cout << "\nNon-Veg Meal\n";
    Meal nonVegMeal = builder.prepareNonVegMeal();
    nonVegMeal.showItems();

    return 0;
}
