/*
03) Crie uma função que recebe dois parâmetros, base e expoente, e retorne a base elevada ao expoente.
*/

//Vou usar o arrow function para fixar o conceito

let elevaValor = (x=1, y=1) => Math.pow(x, y) //ou usando a expressao "**" -> x ** y

console.log(elevaValor(2, 3))
console.log(elevaValor(2, 0))
console.log(elevaValor(4, 2))
console.log(elevaValor())