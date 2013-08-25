#pragma once
#include <iostream>
#include "coffee.h"
#include "coffee-decorator.h"

class WhipDecorator : public CoffeeDecorator {
public:
    WhipDecorator(Coffee* decoratedCoffee);
    virtual double getCost();
    virtual std::string getIngredients();
};