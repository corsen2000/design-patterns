var addWhip = require('./whip-decorator.js').decorator;
var addMilk = require('./milk-decorator.js').decorator;

function SimpleCoffee() {

}
SimpleCoffee.prototype = {
    getCost: function() {
        return 1;
    },
    getIngredients: function() {
        return "Coffee";
    }
}

var decoratedCoffee = addMilk(addMilk(addWhip(new SimpleCoffee())));

console.log(decoratedCoffee.getCost() + " : " + decoratedCoffee.getIngredients());