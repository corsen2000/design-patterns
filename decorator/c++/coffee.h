#pragma once
#include <iostream>

class Coffee {
public:
    virtual double getCost() = 0;
    virtual std::string getIngredients() = 0;
};