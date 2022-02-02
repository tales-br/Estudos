function getPreco (imposto = 0, moeda =`R$`) {
    return `${moeda} ${(this.preco * (1-this.desc) * (1-imposto)).toFixed(2)}`
}

const produto = {
    nome: "Notebook",
    preco: 4567.89,
    desc: 0.1,
    getPreco
}

global.preco=1000
global.desc=0.5

console.log(getPreco())
console.log(produto.getPreco())

const carro = { preco: 4999, desc: 0.2}

console.log(getPreco.call(carro))
console.log(getPreco.apply(carro))

console.log(getPreco.call(carro, 0.17, `Y$`))
console.log(getPreco.apply(carro, [0.17, `Y$`]))
