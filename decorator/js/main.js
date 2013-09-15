var SimpleCoffee = require('./simple-coffee.js').SimpleCoffee;
var addWhip = require('./whip-decorator.js').decorator;
var addMilk = require('./milk-decorator.js').decorator;

var decoratedCoffee = addMilk(addMilk(addWhip(new SimpleCoffee())));

console.log(decoratedCoffee.getCost() + " : " + decoratedCoffee.getIngredients());