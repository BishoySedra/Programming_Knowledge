const express = require('express');
const path = require('path');
const rootDir = require('../helpers/path');
const router = express.Router();
const products = [];

router.get('/add-product', (req, res, next) => {
    res.render('add-product');
});

router.post('/add-product', (req, res, next) => {
    let { title } = req.body;
    if (title !== '') {
        products.push(title);
        console.log(`${title} is Added!`);
    }

    console.log(products);
    res.redirect('/');
});

module.exports = { router, products };
