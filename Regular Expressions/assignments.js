// assignment 1
let ip = "2001:db8:3333:4444:5555:6666:7777:8888";
let re = /\d{4}:\w{2}\d:(\d{4}:){5}\d{4}/ig

// console.log(ip.match(re));


// assignment 2
let specialNames = "Os10O OsO Os100O Osa100O Os1000 Os100m";
re = /Os([0-9])*O/ig

// console.log(specialNames.match(re));

// Output
// ['Os10O', 'OsO', 'Os100O']


// assignment 3
let phone = "+(995)-123 (4567)";
re = /\+\(\d{3}\)-\d{3}\s\(\d{4}\)/ig

// console.log(phone.match(re));

// assignment 4
let date1 = "25/10/1982";
let date2 = "25 - 10 - 1982";
let date3 = "25 10 1982";
let date4 = "25 10 82";

re = /\d{2}(\/|\s-\s|\s)\d{2}(\/|\s-\s|\s)\d{2,4}/ig;

// console.log(date1.match(re)); // "25/10/1982"
// console.log(date2.match(re)); // "25 - 10 - 1982"
// console.log(date3.match(re)); // "25 10 1982"
// console.log(date4.match(re)); // "25 10 82"

// console.log(phone.match(re));


