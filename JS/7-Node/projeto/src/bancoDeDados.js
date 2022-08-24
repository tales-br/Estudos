module.exports = {salvarProduto, getProduto, getProdutos, delProduto}

//Vide arquivo gettersSetters.js na pasta 5-OO !
const sequence = 
{
    _id: 1, //Convenção para dizer que é uma espécie de "encapsulamento private"
    get id() {return this._id++}
}

const produtos = {}

function salvarProduto(produto)
{
    if (!produto.id)
    {
        produto.id = sequence.id
    }
    produtos[produto.id] = produto
    return produto
}

function getProduto(id)
{
    return produtos[id] || {}
}

function getProdutos()
{
    return Object.values(produtos)
}

function delProduto(id)
{
    const produto = produtos[id]
    delete produtos[id]

    return produto
}