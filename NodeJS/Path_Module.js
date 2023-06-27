const path = require('path');

console.log(path.sep);

// concatenate strings together with separator between just like window path
const dir = path.join("Contents", "Sub", "test.txt");
console.log(dir);

const link = path.resolve(dir);
console.log(link);
console.log(path.basename(link));