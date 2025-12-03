
#pragma once
#include "mealcontent.h"
#include "Item.h"
#include <iostream>
using namespace std;

class Meal
{
private:
    mealcontent<item *> content;
    bool isFree = false;

public:
    Meal() = default;
    Meal(const Meal &ML)
    {
        isFree = ML.isFree;
        content = ML.content;
    }
    Meal &operator=(const Meal &ML)
    {
        if (this != &ML)
        {
            isFree = ML.isFree;
            content = ML.content;
        }
        return *this;
    }
    Meal(Meal &&ML)
    {
        isFree = ML.isFree;
        content = std::move(ML.content);
        ML.isFree = false;
    }
    Meal &operator=(Meal &&ML)
    {
        if (this != &ML)
        {
            for (int i = 0; i < content.size(); i++)
                delete content.get(i);
            content.clearAll();
            isFree = ML.isFree;
            content = std::move(ML.content);
            ML.isFree = false;
        }
        return *this;
    }
    ~Meal()
    {
        for (int i = 0; i < content.size(); i++)
            delete content.get(i);
    }

    bool handleFree(bool setFree = false)
    {
        if (setFree)
            isFree = true;
        return isFree;
    }
    void addItem(item *A) { content.add(A); }
    float getCost() const
    {
        if (isFree)
            return 0;
        float cost = 0;
        for (int i = 0; i < content.size(); i++)
            cost += content.get(i)->price();
        return cost;
    }

    void showItems() const
    {
        if (isFree)
            cout << "Free meal\n";
        for (int i = 0; i < content.size(); i++)
        {
            item *it = content.get(i);
            cout << i + 1 << " Item: " << it->itemname();
            packing *p = it->packingtype();
            cout << ", Packing: " << p->pack() << ", Price: " << it->price() << endl;
            delete p;
        }
        if (!isFree)
            cout << "Total Cost: " << getCost() << endl;
    }
};
