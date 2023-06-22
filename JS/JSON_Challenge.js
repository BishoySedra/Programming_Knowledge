// let number = 5;
// console.log(typeof number);
// console.log(number);

// let value = JSON.stringify(number);
// console.log(typeof value);
// console.log(value);



// get my repos names with AJAX and display it in web page.
// const request = new XMLHttpRequest();
// request.open("GET", 'https://api.github.com/users/BishoySedra/repos');
// request.send();

// console.log(request);

// request.onreadystatechange = function () {
//     if (this.readyState === 4 && this.status === 200) {
//         // console.log("Request is Successful fetched!");
//         // console.log(this.responseText);
//         const data = JSON.parse(this.response);
//         for (let index = 0; index < data.length; index++) {
//             const element = data[index].name;
//             const container = document.createElement('div');
//             const text = document.createTextNode(element);
//             container.appendChild(text);
//             document.body.append(container);
//         }
//     }
// };


const request = new XMLHttpRequest();
request.open("GET", "Articles.json");
request.send();

console.log(request);

request.onreadystatechange = function () {
    if (this.readyState === 4 && this.status === 200) {
        console.log(`Data loaded!`);
        console.log(`JSON Object Content Here:`);
        console.log(this.responseText);

        let mainData = JSON.parse(this.responseText);
        for (let index = 0; index < mainData.length; index++) {
            mainData[index]['department'] = "ALL";
        }

        console.table(mainData);

        let updatedData = JSON.stringify(mainData);

        console.log(updatedData)

        let mainDiv = document.createElement('div');
        mainDiv.setAttribute("id", "data");
        document.body.append(mainDiv);

        for (let index = 0; index < mainData.length; index++) {
            mainDiv = document.getElementById("data");
            const innerDiv = document.createElement('div');
            innerDiv.innerHTML +=
                `<h2>${mainData[index].title}</h2>
             <p>Article Number ${mainData[index].id} Body</p>
             <p>Author: ${mainData[index].author}</p>
             <p>Category: ${mainData[index].department}</p>
            `;
            mainDiv.appendChild(innerDiv);

        }
    }
};




