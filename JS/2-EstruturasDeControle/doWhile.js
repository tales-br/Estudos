function intervaloAleatorio (min, max){
    const valor = Math.random() * (max - min) + min
    return Math.floor(valor)
}

let opcao = 0 //Poderia ter somente declarado a variavel, sem ter inicializado ela

do{
    opcao = intervaloAleatorio (-1, 2)
    console.log(`Valor igual: ${opcao}`)
}while(opcao !=-1)