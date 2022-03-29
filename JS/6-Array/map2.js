const carrinho = [
    '{ "nome": "Borracha", "preco": 3.45 }',
    '{ "nome": "Caderno", "preco": 13.90 }',
    '{ "nome": "Kit de Lápis", "preco": 41.22 }',
    '{ "nome": "Caneta", "preco": 7.50 }'
]


const toObj = json => JSON.parse(json)
const soPreco = produto => produto.preco

const compras = carrinho.map(toObj).map(soPreco)

console.log(valor)

console.log(compras[0] + compras[1] + compras[2])