function cube(num) {
    num = parseInt(num);
    return num * num * num;
}

function revrot(str, sz) {
    if (!str) {
        return "";
    }

    const regex = new RegExp('\\d{' + sz + '}', 'ig');

    str = str.match(regex);

    if (!str) {
        return "";
    }

    str = str.map((elem) => {

        let result = 0;

        elem.split("").forEach(element => {
            result += cube(element);
        });

        if (result & 1) {
            return elem.slice(1,) + elem[0];
        }

        return elem.split("").reverse().join("");
    });

    return str.reduce((accu, curr) => accu + curr);
}

console.log(revrot("123456987654", 6));
console.log(revrot("123456987653", 6));
console.log(revrot("66443875", 4));
console.log(revrot("66443875", 8));
console.log(revrot("664438769", 8));
console.log(revrot("123456779", 8));
console.log(revrot("123456779", 0));
console.log(revrot("563000655734469485", 4));