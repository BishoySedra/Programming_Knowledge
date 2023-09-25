const canSum = (target, numbers, memo = {}) => {
    if (target in memo) return memo[target];
    if (target === 0) return true;
    if (target < 0) return false;

    for (let num of numbers) {
        const newTarget = target - num;
        if (canSum(newTarget, numbers, memo) === true) {
            memo[target] = true;
            return true;
        }
    }

    memo[target] = false;
    return false;
};

console.log(canSum(3, [1, 2]));
console.log(canSum(3, [1, 3]));
console.log(canSum(7, [2, 4]));
console.log(canSum(8, [3, 5, 4]));
console.log(canSum(300, [7, 14]));