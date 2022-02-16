//Alguns métodos
//Object.preventExtensions ((evita adicionar novos atributos ao objeto))

const produto = Object.preventExtensions
({
    nome: "Qualquer",
    preco: 1.99,
    tag: "Em promoção"
})

console.log("Extensível: ", Object.isExtensible(produto))

produto.nome = "Borracha"
produto.descricao = "Borracha escolar branca"
delete produto.tag
console.log(produto)

//Object.seal ((sela o objeto, evitando a exclusão e ou inclusão de atributos))

const pessoa = 
{
    nome: "Tales",
    idade: 100
}

Object.seal(pessoa)
console.log("Selado: ", Object.isSealed(pessoa))

pessoa.sobrenome = "Rodrigues"
delete pessoa.nome
pessoa.idade = 30
console.log(pessoa)

//Object.freeze -> sela + congela valores