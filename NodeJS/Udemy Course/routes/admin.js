const express = require('express');
const path = require('path');
const rootDir = require('../helpers/path');
const router = express.Router();
const products = [];

router.get('/add-product', (req, res, next) => {
    res.sendFile(path.join(rootDir, 'views', 'add-product.html'));
});

router.post('/add-product', (req, res, next) => {
    let { title } = req.body;
    products.push(title);
    console.log(title);
    res.redirect('/');
});

module.exports = { router, products };
