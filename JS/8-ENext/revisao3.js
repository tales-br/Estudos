// ES8: Object.values (RETORNA OS VALORES) | Object.entries (MOSTRA AS ENTRADS EM FORMA DE MATRIZ)
const obj = { a: 1, b: 2, c: 3 }
console.log(Object.values(obj))
console.log(Object.entries(obj))

// Melhorias na Notação Literal
const nome = 'Tales'
const pessoa = {
    nome, //Nao precisa escrever assim-> "nome: ...." | o ES já faz tudo 
    ola() {
       return ', olá!' 
    }
}

console.log(pessoa.nome, pessoa.ola())

// Class
class Animal {}
class Cachorro extends Animal {
    falar() {
        return 'Au au!'
    }
}

console.log(new Cachorro().falar())