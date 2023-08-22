function partsSums(ls) {
    let sum = ls.reduce((accu, curr) => accu + curr);

    const arr = []
    for (let i = 0; i < ls.length; i++) {
        arr.push(sum);
        sum -= ls[i];
    }
    arr.push(0);

    return arr;
}

console.log(partsSums([1, 2, 3, 4, 5, 6]));