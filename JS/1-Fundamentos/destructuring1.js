//Novo recurso do EC2015

const pessoa = {
    nome: null,
    idade: null,
    endereco:{
        logradouro: null,
        numero: null
    }
}

pessoa.nome = "Tales";
pessoa.idade = 33;
pessoa.endereco.logradouro = "Rua";
pessoa.endereco.logradouro = 10;

//outra forma! de desestruturacao

const {nome, idade} = pessoa;
console.log(nome, idade);

const {nome:n, idade:i} = pessoa;
console.log(n, i);

const {sobrenome, bemHumorada = true} = pessoa;
console.log(nome, idade);

const {endereco: {logradouro, numero, cep}} = pessoa;
console.log(logradouro, numero, cep);



