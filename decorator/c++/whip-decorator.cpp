#include <iostream>
#include "whip-decorator.h"

WhipDecorator::WhipDecorator(Coffee* decoratedCoffee) : CoffeeDecorator(decoratedCoffee) {};

double WhipDecorator::getCost() {
    return CoffeeDecorator::getCost() + 2;
}

std::string WhipDecorator::getIngredients() {
    return CoffeeDecorator::getIngredients() + " Whip";
}