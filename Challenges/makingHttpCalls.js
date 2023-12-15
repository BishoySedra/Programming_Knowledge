const http = require('http');
const page = require('./getFrontPageCode');

const server = http.createServer((req, res) => {
    page.getCode('http://www.google.com', req, res);
});

server.listen(5000);

