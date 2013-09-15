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

exports.SimpleCoffee = SimpleCoffee;