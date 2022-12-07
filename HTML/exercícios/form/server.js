const express = require('express')
const app = express()
const bodyParser = require('body-parser')
const port = 3003

app.use(bodyParser.urlencoded({extended: true}))

app.post('/usuarios', (req, resp) =>{
    console.log(req.body)
    resp.send('<h1>Parabéns</h1>')
}
)
app.listen(port)
console.log("Running port:", port)