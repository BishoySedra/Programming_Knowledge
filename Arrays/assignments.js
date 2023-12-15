let mix = [1, 2, 3, "E", 4, "l", "z", "e", "r", 5, "o"];
let solution = mix.map((elem) => isNaN(parseInt(elem)) ? elem : "").reduce((accu, curr) => accu + curr);
console.log(solution);
// Elzero using map + reduce only

let myString = "EElllzzzzzzzeroo";
solution = myString.split('')
    .filter((elem, index, array) => array.indexOf(elem) === index)
    .reduce((accu, curr) => accu + curr)
console.log(solution);
// Elzero filter only

let myArray = ["E", "l", "z", ["e", "r"], "o"];
solution = myArray.reduce((accu, curr) => accu + curr).replaceAll(',', '');
console.log(solution);
// Elzero reduce only

let numsAndStrings = [1, 10, -10, -20, 5, "A", 3, "B", "C"];
re = /[a-z]/i
solution = numsAndStrings.filter((elem) => !re.test(elem)).map((elem) => -elem);
console.log(solution);
// [-1, -10, 10, 20, -5, -3] map + filter + your knowledge

let nums = [2, 12, 11, 5, 10, 1, 99];
solution = nums.reduce((accu, curr) => curr & 1 ? accu + curr : accu * curr, 1);
console.log(solution);
// 500