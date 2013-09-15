exports.decorator = function(coffee) {
    var originalCost = coffee.getCost;
    var originalIngredients = coffee.getIngredients;

    coffee.getCost = function() {
        return originalCost.apply(this, arguments) + 2;
    }
    coffee.getIngredients = function() {
        return originalIngredients.apply(this, arguments) + " Whip";
    }

    return coffee;
}