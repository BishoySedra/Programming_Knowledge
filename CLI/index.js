#!/usr/bin/env node

import inquirer from "inquirer";
import yargs from "yargs";

const { argv } = yargs(process.argv);

async function getWeather(country) {
    const data = await fetch(`http://api.weatherapi.com/v1/current.json?key=e346fcf427b149d0a2090941232706&q=${country}&aqi=no`);
    const { current } = await data.json();
    const { temp_c } = current;
    console.log(temp_c);
}

inquirer.prompt([{
    type: 'input',
    name: 'country',
    message: 'Enter a country:'
}]).then((answer) => {
    const { country } = answer;
    getWeather(country);
}).catch((err) => {
    console.log(err);
});