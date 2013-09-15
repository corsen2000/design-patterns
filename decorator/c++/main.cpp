#include <iostream>
#include "coffee.h"
#include "simple-coffee.h"
#include "milk-decorator.h"
#include "whip-decorator.h"
using namespace std;

int main() {
    Coffee* decoratedCoffee = new MilkDecorator(new MilkDecorator(new WhipDecorator(new SimpleCoffee())));

    cout << decoratedCoffee->getCost() << " : " << decoratedCoffee->getIngredients() << endl;

    delete decoratedCoffee;
    return 0;
}