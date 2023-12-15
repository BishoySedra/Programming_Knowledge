let swappingCases = "elZERo";
swappingCases = swappingCases.split("")
    .map((elem) => elem === elem.toUpperCase() ? elem.toLowerCase() : elem.toUpperCase())
    .join("");
console.log(swappingCases);

let invertedNumbers = [1, -10, -20, 15, 100, -30];
invertedNumbers = invertedNumbers.map((elem) => elem * -1);
console.log(invertedNumbers);

let ignoreNumbers = "Elz123er4o";
ignoreNumbers = ignoreNumbers.split("").map((char) => isNaN(parseInt(char)) ? char : "").join("");
console.log(ignoreNumbers);

console.log(ignoreNumbers.startsWith('E'));
console.log(ignoreNumbers.endsWith('o'));

let sentence = "I love foood Code Too Playing Much";
// console.log(sentence.split(" "));
sentence = sentence.split(" ").filter((elem) => elem.length <= 4).join(" ");
console.log(sentence);

let mix = "A13BS2ZX";
mix = mix.split("")
    .filter((elem) => !isNaN(parseInt(elem)))
    .map((elem) => elem * elem).join("");
console.log(mix);

let theBiggest = ['bla', 'propaganda', 'Other', "AAA", "Battery", "test"]
theBiggest = theBiggest.reduce((accu, curr) => accu.length > curr.length ? accu : curr);
console.log(theBiggest);


let removeChars = ['E', '@', '@', '@', 'L', 'Z', 'E', '$', '&', 'R', 'O', 1, 2, 3, 1]
let re = /[a-z]/i
removeChars = removeChars.filter((elem) => re.test(elem))
    .reduce((accu, curr) => accu + curr);
console.log(removeChars);

let myString = "1,2,3,EE,l,z,e,r,o,_,W,e,b,_,S,c,h,o,o,l,2,0,Z";
let solution = myString.split('').filter((elem) => elem !== ',' && isNaN(parseInt(elem))).slice(1, -1).reduce((accu, curr) => accu + curr).replaceAll('_', ' ');
console.log(solution); // Elzero Web School

