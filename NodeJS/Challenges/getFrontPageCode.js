// const http = require('http');

// const getIt = (url, req, res) => {
//     http.get(url, (response) => {

//         response.setEncoding("utf-8");

//         let body = ``;
//         response.on('data', (chunk) => {
//             body += chunk;
//             // console.log(chunk);
//         });

//         response.on('end', () => {
//             res.write(`${body}`);
//             return res.end(console.log('Done!!'));
//         });


//     }).on('error', (err) => {
//         console.log(err.message);
//     });
// }

// exports.getCode = getIt;

var http = require('http');
http.request({
    host: 'www.google.com',
    method: 'GET',
    path: "/"
}, function (response) {
    response.setEncoding("utf8");
    response.on("readable", function () {
        console.log(response.read())
    });
}).end();