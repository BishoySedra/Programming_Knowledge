const fs = require('fs');

const requestHandler = (req, res) => {
    const url = req.url;
    const method = req.method;

    if (url === '/') {
        res.write(`
            <html>
            <head>
            <title>Send a message!!</title>
            </head>
            <body>
            <form action = "/message" method = "POST"> 
            <input type = "text" name = "message">
            <button type = "submit">Send!</button>
            </form>
            </body>
            </html>
            `);
        return res.end();
    }

    if (url === '/message' && method === 'POST') {
        // 1- redirect to the slash url Done!!!
        // 2- create message.txt to store the user input
        const body = [];
        req.on('data', (chunk) => {
            body.push(chunk);
            // console.log(chunk);
        });

        return req.on('end', () => {
            const parsedBody = Buffer.concat(body).toString();
            let message = parsedBody.split('=')[1].replace(/\+/g, ' ');
            console.log(message);
            fs.writeFile('message.txt', `${message}\n`, { flag: 'a' }, () => {
                res.statusCode = 302;
                res.setHeader("location", "/");
                return res.end();
            });
        });
    }

    res.setHeader('type', 'text/html');
    res.write(`
        <html>
        <head>
        <title>My First Node.js Page</title>
        </head>
        <body>
        <h1>Hello From My First Node.js Server!!!</h1>
        </body>
        </html>
        `);
    res.end();
}

// module.exports = requestHandler;

// module.exports = {
//     request: requestHandler,
//     text: 'Some Hard Coded Text!!'
// };

exports.request = requestHandler;
exports.text = 'Some Hard Coded Text!!';