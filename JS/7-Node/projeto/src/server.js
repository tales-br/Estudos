const port = 3003

const express = require("express")
const app = express()

//Habilitar urlencoded
app.use(express.json())
app.use(express.urlencoded({
  extended: true
}))

const bancoDeDados = require("./bancoDeDados")

app.get("/produtos", (rqst, rsp, nxt) => {
    rsp.send(bancoDeDados.getProdutos())
})

//Pode ir encadeando os parâmtros como ex.: "/produtos/:id/:nome"
app.get("/produtos/:id", (rqst, rsp, nxt) => {
    rsp.send(bancoDeDados.getProduto(rqst.params.id))
})

app.post("/produtos", (rqst, rsp, nxt) => {
    const produto = bancoDeDados.salvarProduto({
        nome: rqst.body.nome,
        preco: rqst.body.preco
    })
    rsp.send(produto) //Já convertido em JSON
})

app.delete("/produtos/:id", (rqst, rsp, nxt) => {
    const produto = bancoDeDados.delProduto(rqst.params.id)
    rsp.send(produto)
})

app.put("/produtos/:id", (rqst, rsp, nxt) => {
    const produto = bancoDeDados.salvarProduto({
        id: rqst.params.id,
        nome: rqst.body.nome,
        preco: rqst.body.preco
    })
    rsp.send(produto)
})

app.listen(port, () => {
    console.log(`Servidor executando na porta: ${port}.`)
})