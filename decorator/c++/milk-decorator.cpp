#include "milk-decorator.h"

MilkDecorator::MilkDecorator(Coffee* decoratedCoffee) : CoffeeDecorator(decoratedCoffee) {};

double MilkDecorator::getCost() {
    return CoffeeDecorator::getCost() + 1;
}

std::string MilkDecorator::getIngredients() {
    return CoffeeDecorator::getIngredients() + " Milk";
}