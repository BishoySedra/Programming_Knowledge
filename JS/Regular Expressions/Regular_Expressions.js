let string = "12 13 20 50 126 454 8785"
let arr = string.split(' ');
arr = arr.filter((elem) => parseInt(elem) <= 50)
// console.log(arr);

// ========================================
// syntax => /pattern/modifiers or new RegExp(pattern, modifiers)
// modifiers => i, g, m (case-insensitive, global, multi-lines)
// ========================================

string = "Bishoy sedra bishoy"
regex = /bishoy/ig
regex = new RegExp("bishoy", "ig")

// console.log(string.match(regex));

specialNums = "AbVdbQwbedj123!325wq@#$%!"
regex = /[^a-z0-9]/gi

// console.log(specialNums.match(regex));


//    . => matches any character, except newline or other line terminators.
//   \w => matches word characters. [a-z, A-Z, 0-9 And Underscore]
//   \W => matches Non word characters
//   \d => matches digits from 0 to 9.
//   \D => matches non-digit characters.
//   \s => matches whitespace character.
//   \S => matches non whitespace character.

string = "1@3.org 1@@@@@3.com 1@k.com 1@3......com";
regex = /\w@\w.(com|org)/g;

// console.log(string.match(regex));

string = "bsihoy bsihoyspam sspams spambishoy"
regex = /(\bspam|spam\b)/g

// console.log(string.match(regex));

/*
  n+    => One Or More
  n*    => zero or more
  n?    => zero or one
*/

let mails = "o@nn.sa osama@gmail.com elzero@gmail.net osama@mail.ru"; // All Emails
regex = /\w+@\w+.\w+/gi

// console.log(mails.match(regex));

let nums = "0110 10 150 05120 0560 350 00"; // 0 Numbers Or No 0
regex = /0\d*0/gi

// console.log(nums.match(regex));

let urls = "https://google.com http://www.website.net web.com"; // http + https
regex = /(https?:\/\/)?(www.)?\w+.\w+/gi

// console.log(urls.match(regex));

//   n{x}   => Number of
//   n{x,y} => Range
//   n{x,}  => At Least x

let serials = "S100S S3000S S50000S S950000S";

// console.log(serials.match(/s\d{3}s/ig)); // S[Three Number]S
// console.log(serials.match(/s\d{3,5}s/ig)); // S[Four Or Five Number]S
// console.log(serials.match(/s\d{4,}s/ig)); // S[At Least Four]S


/*
  $  => End With Something
  ^  => Start With Something
  ?= => Followed By Something
  ?! => Not Followed By Something
*/

let myString = "We Love Programming";
let names = "1OsamaZ 2AhmedZ 3Mohammed 4MoustafaZ 5GamalZ";

console.log((/ing$/ig).test(myString));  // end with ing
console.log((/^we/ig).test(myString));  // start with we
console.log((/lz$/ig).test(names));     // end with lz
console.log((/^\d/ig).test(names));     // start with digit
console.log(names.match(/\d\w{5}(?=z)/ig));
// // starts with digit, contains 5 word characters followed by z

console.log(names.match(/\d\w{8}(?!z)/ig));
// starts with digit, contains 8 word characters not followed by z