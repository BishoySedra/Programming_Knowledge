Array.prototype.remove_ = function (integer_list, values_list) {
    const arr = [];

    integer_list.forEach((elem) => {
        if (!(values_list.includes(elem))) {
            arr.push(elem);
        }
    })

    return arr;
}

let arr = []

console.log(arr.remove_([1, 1, 2, 3, 1, 2, 3, 4], [1, 3]));