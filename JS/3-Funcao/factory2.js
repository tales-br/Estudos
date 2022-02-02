function criarProduto (nomeProduto, precoProduto){
    return{ //nao precisaria colocar o nome 
        nome: nomeProduto,
        preco: precoProduto,
        desconto: 0.1
    }
}


console.log(criarProduto("Notebook", 2500.00))
console.log(criarProduto("Celular", 1520.90))