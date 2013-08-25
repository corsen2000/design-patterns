#include "coffee-decorator.h"

CoffeeDecorator::CoffeeDecorator(Coffee* decoratedCoffee) {
    this->decoratedCoffee = decoratedCoffee;
}

CoffeeDecorator::~CoffeeDecorator() {
    delete this->decoratedCoffee;
}

double CoffeeDecorator::getCost() {
    return this->decoratedCoffee->getCost();
}

std::string CoffeeDecorator::getIngredients() {
    return this->decoratedCoffee->getIngredients();
}