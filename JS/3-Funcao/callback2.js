const notas = [7.7, 6.5, 4.4, 3.3, 8.9, 10]

//sem callback
let notasBaixas = []

for (let i in notas){
    if (notas[i] < 7 ){
        notasBaixas.push(notas[i])
    }
}

console.log(notasBaixas)

//com callback
const notasBaixas2 = notas.filter(function (nota) {
    return nota < 7
})

console.log(notasBaixas2)
const notasMenorQue7 = nota => nota < 7
const notasBaixas3 = notas.filter(notasMenorQue7)
console.log(notasBaixas3)