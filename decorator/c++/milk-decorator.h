#pragma once
#include <iostream>
#include "coffee.h"
#include "coffee-decorator.h"

class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(Coffee* decoratedCoffee);
    virtual double getCost();
    virtual std::string getIngredients();
};