function createHashtable() {
    let mp = {}
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    return mp;
}

function solution(roman) {
    let mp = createHashtable();
    roman = roman.split('').reverse();
    let value = mp[roman[0]];
    for (let i = 1; i < roman.length; i++) {
        if (mp[roman[i - 1]] <= mp[roman[i]]) {
            value += mp[roman[i]];
        } else {
            value -= mp[roman[i]];
        }
    }
    return value;
}

console.log(solution("IV"));