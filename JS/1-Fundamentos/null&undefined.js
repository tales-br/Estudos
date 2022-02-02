let valor;

console.log(valor);

valor = null; //ausencia de valor (n esta apontando para nenhum local de memoria)

console.log(valor);
//console.log(valor.toString()); //dá erro "TypeError" pois o valor é nulo 

const produto = {};

console.log(produto.preco);

produto.preco = 3.5;
console.log(produto);


produto.preco = undefined; //lambança!
console.log(!!produto.preco); //transforma em bool
//delete produto.preco;
console.log(produto);

produto.preco = null;

console.log(!!produto.preco);
console.log(produto);
