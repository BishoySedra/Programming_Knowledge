function cakes(recipe, available) {
    let result = Number.MAX_VALUE;
    for (flavour in recipe) {
        if (available[flavour]) {
            result = Math.min(result, Math.floor(available[flavour] / recipe[flavour]));
        } else {
            return 0;
        }
    }
    return result;
}

console.log(cakes({ flour: 500, sugar: 200, eggs: 1 }, { flour: 1200, sugar: 1200, eggs: 5, milk: 200 }));