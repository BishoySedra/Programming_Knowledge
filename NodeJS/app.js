// First Test App //

// const name = "bishoy";

// console.log("First Node App!!!");
// // console.log(`${__filename}`);
// console.log(`${__dirname}`);

// setInterval(() => {
//     console.log(`${name}`);
// }, 1000);

// ==================================================

const obj = require('lodash');
const arr = [1, [2, [3, [4]]]];
const newArr = obj.flattenDeep(arr);
console.log(newArr);