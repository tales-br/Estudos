const produtos = [
    { nome: "Notebook", preco: 12000, fragil: true},
    { nome: "Tablet", preco: 5000, fragil: true},
    { nome: "Copo de vidro", preco: 12.49, fragil: true},
    { nome: "Copo de plástico", preco: 18.5, fragil: false}
]

console.log(produtos.filter(function(p){ return false })) // nao mostra nada pois para mostrar precisa retornar true na condicao

const caro = produto => produto.preco >= 1000

const fragil = produto => produto.fragil // retorna direto o true ou false na chave de fragil, por isso n precisei colocar a condicao nesse caso

console.log(produtos.filter(caro).filter(fragil))