//coleção dinâmica de de pares chave/valor

const produto = new Object

produto.nome = "cadeira"
produto["marca do produto"] = "generica" //eek.. mas dá pra ser útil em algo
produto.preco = 220

console.log(produto)

delete produto.preco
delete produto["marca do produto"]

console.log(produto)

const carro =
{
    modelo: "chevette",

    valor: 3000,

    proprietario: 
    {
        nome: "fulano",

        idade: 65,

        endereco:
        {
            logradouro: "rua tal",

            numero: 123
        }
    },

    condutores://array de objetos
    [
        {
            nome: "junior",
            idade: 25
        },
        {
            nome: "ana",
            idade: 59
        }
    ],

    calculaValorSeguro: function()
    {
        //implementacao qlqr..
    }
}

carro.proprietario.endereco.numero = 4567
carro["proprietario"]["endereco"]["logradouro"] = "rua qlqr"

console.log(carro)

delete carro.condutores
delete carro.proprietario.endereco
delete carro.calculaValorSeguro

console.log(carro)
console.log(carro.condutores)
//console.log(carro.condutores.length)