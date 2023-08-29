function expandedForm(num) {

    return String(num).split("")
        .map((num, i, arr) => `${num}${"0".repeat(arr.length - (i + 1))}`)
        .filter((num) => Number(num) != 0)
        .reduce((accu, curr) => accu + " + " + curr);

}

console.log(expandedForm(12));
console.log(expandedForm(70304));
console.log(expandedForm(42));