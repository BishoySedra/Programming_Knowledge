let myString = "1,2,3,EE,l,z,e,r,o,_,W,e,b,_,S,c,h,o,o,l,2,0,Z";

let solution = myString.replaceAll('_', ' ').split(',').filter(elem => {
    return (isNaN(parseInt(elem))) ? elem : '';
}).reduce((acc, curr) => {
    return `${acc}${curr}`;
});

console.log(solution.substring(1, solution.length - 1)); // Elzero Web School