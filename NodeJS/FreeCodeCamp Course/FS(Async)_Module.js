//// Call Back Hell
// const fs = require('fs');

// fs.readFile('./Contents/first.txt', 'utf-8', (error, res) => {
//     if (error) {
//         console.log(error);
//         return;
//     }
//     const first = res;
//     console.log(res);
//     fs.readFile('./Contents/second.txt', 'utf-8', (error, res) => {
//         if (error) {
//             console.log(error);
//             return;
//         }
//         const second = res;
//         console.log(res);
//         fs.writeFile('./Contents/async-result.txt', `${first},${second}\n`, { flag: 'a' }, (err, res) => {
//             if (err) {
//                 console.log(err);
//                 return;
//             }
//             console.log(res);
//         });
//     })
// })

//// with promises

const fs = require('fs').promises;

async function readAndWriteFiles() {
    try {
        const first = await fs.readFile('./Contents/first.txt', 'utf-8');
        console.log(first);

        const second = await fs.readFile('./Contents/second.txt', 'utf-8');
        console.log(second);

        await fs.writeFile('./Contents/async-result.txt', `the result is ${first}, ${second}\n`, { flag: 'a' });

        const result = await fs.readFile('./Contents/async-result.txt', 'utf-8');
        console.log(result);
    } catch (error) {
        console.log(error);
    }
}

readAndWriteFiles();