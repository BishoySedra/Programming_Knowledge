var countBits = function (n) {
    let cnt = 0;
    while (n !== 0) {
        cnt += n % 2;
        n = Math.floor(n / 2);
    }
    return cnt;
};

console.log(countBits(0));
console.log(countBits(4));
console.log(countBits(7));
console.log(countBits(9));
console.log(countBits(10));