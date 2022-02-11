const pessoa = 
{
    nome: "Tales",
    idade: 33,
    peso: 65
}

console.log(Object.keys(pessoa))
console.log(Object.values(pessoa))
console.log(Object.entries(pessoa))

Object.entries(pessoa).forEach(([chave, valor]) => //destructuring
{
    console.log(`${chave} : ${valor}`)
})

Object.defineProperty(pessoa, "dataNascimento", 
{//atributos
    enumerable: true,
    writable: false,
    value: "01/01/2022"
})

//Objetc.assign (ECMAScript 2015)

const dest = { a:1 }
const o1 = { b: 2 }
const o2 = { c: 3, a: 4 }
const nova = Object.assign(dest, o1, o2)

Object.freeze(nova)
nova.c = 1234
console.log(nova)