const fabricantes = ["Mercedes", "Audi", "Lamborguini"]

function imprimirResultado (nome, indice){
    console.log(`${indice + 1} - ${nome}`)
}
fabricantes.forEach(imprimirResultado)
fabricantes.forEach(dados => console.log(dados))