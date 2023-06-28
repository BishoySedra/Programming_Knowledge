const fs = require('fs');
const first = fs.readFileSync('./Contents/first.txt', 'utf8');
const second = fs.readFileSync('./Contents/second.txt', 'utf8');

// flag to add new lines in the text file without override
fs.writeFileSync('./Contents/sync-result.txt', `${first},${second}\n`, { flag: 'a' });

// console.log(fs);
console.log(first, second);