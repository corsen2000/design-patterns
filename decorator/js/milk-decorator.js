exports.decorator = function(coffee) {
    var originalCost = coffee.getCost;
    var originalIngredients = coffee.getIngredients;

    coffee.getCost = function() {
        return originalCost.apply(this, arguments) + 1;
    }
    coffee.getIngredients = function() {
        return originalIngredients.apply(this, arguments) + " Milk";
    }

    return coffee;
}