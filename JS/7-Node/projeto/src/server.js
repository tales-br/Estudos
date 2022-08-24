const port = 3003

const express = require ("express")
const app = express()

//Atende a todas as URLS!
app.use((rqst, rsp, nxt) => {
    console.log("Middleware 1...")
    nxt()
})

app.get("/produtos", (rqst, rsp, nxt) => {
    console.log("Middleware 2...")
    nxt()
})

app.get("/produtos", (rqst, rsp, nxt) => {
    rsp.send({nome: "Notebook", preco: 10000}) //o método send converte para JSON automaticamente
})

app.listen(port, () => {
    console.log(`Servidor executando na porta: ${port}.`)
})