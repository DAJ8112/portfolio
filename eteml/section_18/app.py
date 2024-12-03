from flask import Flask, render_template, request

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/about')
def about():
    return render_template('about.html')

@app.route('/projects')
def projects():
    return render_template('projects.html')

@app.route('/journey')
def journey():
    return render_template('journey.html')

@app.route('/touch', methods=['GET', 'POST'])
def contact():
    if request.method == 'POST':
        the_name = request.form['name']
        return f"<html>Thank you {the_name}, I'll be in touch soon. </html>"
    return render_template('contact.html')

@app.route('/submit', methods=['GET', 'POST'])
def thankyou():
    return render_template('thanks.html')

@app.route('/score/<int:score>')
def marks(score):
    return f"The marks you scored = {score}"

@app.route('/eligible/<int:age>')
def eligibility(age):
    
    if age>18:
        eligible = "Yess"
    else:
        eligible="Noo"
    
    return render_template('driving_test.html', statuss = eligible)

if __name__ == '__main__':
    app.run(debug=True)
