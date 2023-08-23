function compare(prev, curr) {
    return prev - curr;
}

function gimme(triplet) {
    const arr = [...triplet]; // shallow copy
    arr.sort(compare);
    return triplet.findIndex((elem) => elem == arr[1]);
}

console.log(gimme([2, 3, 1]));
console.log(gimme([5, 10, 14]));
