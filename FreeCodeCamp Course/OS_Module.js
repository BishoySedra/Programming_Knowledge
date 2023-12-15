// access OS Built-In Module
const os = require('os');

// show the user info of this engine
const user = os.userInfo();
console.log(user);

// show the uptime in seconds
const uptime = os.uptime();
console.log(`the uptime is ${uptime}`);

// Operating system information
myCurrentOS = {
    platform: os.platform(),
    release: os.release(),
    Total_Memory: os.totalmem(),
    Free_Memory: os.freemem()
};
console.log(myCurrentOS);