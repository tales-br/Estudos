const pilotos = ["Vettel", "Alonso", "Raikkonen", "Massa"] //por ser uma constante, o tipo de dado não poderá ser alterado, porém o valor do array pode ser mudado!
console.log(pilotos)

pilotos.pop() //remove o último registro
console.log(pilotos)

pilotos.push("Verstappen") //adiciona no último registro
console.log(pilotos)

pilotos.shift() //remove no primeiro registro
console.log(pilotos)

pilotos.unshift("Tales") //adiciona no primeiro registro
console.log(pilotos)

//O Splice pode adicionar e remover elementos do array (inclusive ao mesmo tempo, vide: array.js)

//ADD
pilotos.splice(2, 0, "Bottas", "Massa")
console.log(pilotos)

//Remover
pilotos.splice(3, 1)
console.log(pilotos)

const algunsPilotos1 = pilotos.slice(2) //divide em um novo array!!!
console.log(algunsPilotos1)

const algunsPilotos2 = pilotos.slice(1, 4) //nao pega o último elemento!
console.log(algunsPilotos2)
