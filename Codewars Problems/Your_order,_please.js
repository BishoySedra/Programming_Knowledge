function order(words) {
    if (!words) {
        return "";
    }

    arr = []

    words = words.split(" ").forEach((elem) => {
        const re = /\d/ig;
        number = elem.match(re);
        arr[parseInt(number[0]) - 1] = elem;
    });

    arr = arr.reduce((accu, curr) => accu + " " + curr);
    return arr;
}

console.log(order(""));