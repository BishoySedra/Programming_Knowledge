// some practicing

// const myPromise = new Promise((res, rej) => {
//     setTimeout(() => {
//         // res("Good");
//         rej(Error("I'm The Bad Promise!"));
//     }, 1000)
// });

// async function readData() {

//     // console.log("Before Promise");
//     // console.log(await myPromise.catch((rej) => rej));
//     // console.log("After Promise");

//     myPromise.then((res) => {
//         return res;
//     }).catch((rej) => {
//         return rej;
//     }).finally(() => console.log("The operation is Done!!!"));

// };

// console.log(readData());

// ==========================================================================

// get Data Using Promises

// const myPromise = new Promise((res, rej) => {
//     const data = new XMLHttpRequest();
//     data.open("GET", "dta.json");

//     data.onload = function () {
//         if (data.readyState === 4 && data.status === 200) {
//             res(JSON.parse(data.responseText));
//         } else {
//             rej(Error('Something went wrong!'));
//         }
//     }

//     data.send();
// });

// myPromise.then((data) => {
//     data.length = 5;
//     console.log(data);
//     for (let index = 0; index < data.length; index++) {
//         console.log(data[index]);
//         document.body.innerHTML += (`<div>
//         <h3>${data[index]["title"]}</h3>
//         <p>${data[index]["description"]}</p>
//         </div>`);
//     }
// }).catch((reason) => console.error(reason));

// ==========================================================================

// Get Data Using Fetch

// async function getData() {
//     const response = await fetch("data.json");
//     // console.log(response);
//     if (response.status === 200) {
//         return await response.json();
//     } else {
//         throw Error(`Status Code: ${response.status}`);
//     }
// }

// const action = getData();

// action.then((res) => {
//     const data = res;
//     data.length = 5;
//     console.log(data);
//     for (let index = 0; index < data.length; index++) {
//         console.log(data[index]);
//         document.body.innerHTML += (`<div>
//         <h3>${data[index]["title"]}</h3>
//         <p>${data[index]["description"]}</p>
//         </div>`);
//     }
// }).catch((reason) => reason);