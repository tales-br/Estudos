const notas =[6.1, 5.2, 7.9, 9.9]

for (let i in notas){
    console.log(`I = ${i} Valor = ${notas[i]}`)
}

const pessoa = {
    nome: "Fulano",
    sobrenome: "Ciclano",
    idade: 30,
    peso: 75,
    saldo: 0.0001,
}

for (let i in pessoa){
    console.log(`${i} = ${pessoa[i]}`)
}