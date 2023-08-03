const express = require('express');
const path = require('path');
const rootDir = require('../helpers/path');
const { products } = require('./admin');

const router = express.Router();

router.get('/', (req, res, next) => {
    res.render('shop', { products, docTitle: "shop" });
});

module.exports = router;