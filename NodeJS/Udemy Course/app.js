// 3rd party packages
const bodyParser = require('body-parser');

// core modules
const path = require('path');

// app object from express
const express = require('express');
const app = express();

app.set('view engine', 'pug');
app.set('views', 'views');

// routes
const adminRoutes = require('./routes/admin');
const shopRoutes = require('./routes/shop');

// for parsing body data
app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static(path.join(__dirname, 'public')));

// routes used in application
app.use('/admin', adminRoutes.router);
app.use(shopRoutes);

app.use((req, res, next) => {
    res.status(404).sendFile(path.join(__dirname, 'views', 'page-not-found.html'));
})

// port listening
app.listen(8000, () => console.log('Server Running!!'));