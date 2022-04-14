Array.prototype.filterEdit = function (callback)
{
    const newArray= []
    for (let i = 0; i < this.length; i++)
    {
        if (callback(this[i], i, this))
        {
            newArray.push(this[i])
        }
    }
    return newArray
}

const produtos = [
    { nome: "Notebook", preco: 12000, fragil: true},
    { nome: "Tablet", preco: 5000, fragil: true},
    { nome: "Copo de vidro", preco: 12.49, fragil: true},
    { nome: "Copo de plástico", preco: 18.5, fragil: false}
]

console.log(produtos.filter(function(p){ return false }))

const caro = produto => produto.preco >= 1000

const fragil = produto => produto.fragil

console.log(produtos.filterEdit(caro).filterEdit(fragil))