function pigIt(str) {
    let re = /\w{1,}/ig;
    str = str.replaceAll(re, function (match) {
        return `${match.slice(1)}${match[0]}ay`;
    });
    return str;
}

console.log(pigIt('Pig latin is cool'));
