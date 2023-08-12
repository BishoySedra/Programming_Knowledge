from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('home.html',
                            pageTitle = "home",
                              custom_css= "home")

@app.route('/about')
def about():
    return render_template('about.html',
                            pageTitle = "about")

@app.route('/add')
def add():
    return render_template('add.html',
                            pageTitle = "add",
                              custom_css= "add")

@app.route('/skills')
def skills():
    return render_template('skills.html',
                            pageTitle = "skills",
                            page_head = "My Skills",
                            skills=[("Python",95),("C++",80),("Java",75)])

if __name__ == '__main__':
    app.run(port=8080, debug=True)
