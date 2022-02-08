/*
Por mais que seja declarado como uma constante, pode ser feito alteração no conteúdo do objeto, 
pois o valor que está sendo alterado não é o endereço da memória, mas sim o conteúdo da memória
*/
const pessoa = { nome: "Joao" }
pessoa.nome = "Pedro"
console.log(pessoa)

//congela o objeto!
Object.freeze(pessoa)
pessoa.nome = "Maria"
pessoa.end = "Bla Bla Bla"
delete pessoa.nome

console.log(pessoa.nome)
console.log(pessoa)
