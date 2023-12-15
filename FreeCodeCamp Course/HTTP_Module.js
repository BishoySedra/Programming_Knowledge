const http = require('http');
// code: 'ERR_STREAM_WRITE_AFTER_END'. I get this error without using return statement
const server = http.createServer((req, res) => {
    if (req.url === '/') {
        return res.end('Welcome To my first testing of nodeJS Server!!')
    } else if (req.url === '/about') {
        return res.end(`I'm Bishoy Sedra`);
    } else if (req.url === "/end") {
        return res.end(`the server hosting time limit exceeded!`);
    }

    return res.end(`
    <h1>Oops!!</h1>
    <h2>Not Found - 404</h2>
    <a href = "/">Go Back Home</a>
    `);
});

server.listen(5000);

// const server = http.createServer((req, res) => {
//     res.writeHead(200, { 'Content-Type': 'text/html' });
//     res.end(JSON.stringify({
//         data: 'Hello World!',
//     }));
// });

// server.listen(8000);