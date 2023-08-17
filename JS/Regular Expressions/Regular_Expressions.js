let string = "12 13 20 50 126 454 8785"
let arr = string.split(' ');
arr = arr.filter((elem) => parseInt(elem) <= 50)
console.log(arr);

// ========================================
// syntax => /pattern/modifiers or new RegExp(pattern, modifiers)
// modifiers => i, g, m (case-insensitive, global, multi-lines)
// ========================================

string = "Bishoy sedra bishoy"
regex = /bishoy/ig
regex = new RegExp("bishoy", "ig")

console.log(string.match(regex));

specialNums = "AbVdbQwbedj123!325wq@#$%!"
regex = /[^a-z0-9]/gi

console.log(specialNums.match(regex));