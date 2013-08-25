#pragma once
#include <iostream>
#include "coffee.h"

class CoffeeDecorator : public Coffee {
public:
    CoffeeDecorator(Coffee* decoratedCoffee);
    virtual ~CoffeeDecorator();
    virtual double getCost();
    virtual std::string getIngredients();
private:
    Coffee* decoratedCoffee;
};