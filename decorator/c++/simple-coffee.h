#pragma once
#include "coffee.h"

class SimpleCoffee : public Coffee {
public:
    SimpleCoffee();
    virtual double getCost();
    virtual std::string getIngredients();
};