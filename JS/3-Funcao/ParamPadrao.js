// 1ª estrategia para gerar valor padrao (muito comum, o pessoal ainda usa bastante!)
function soma1(a, b, c){
    a = a || 1 //teste que cai no ou V ou F (retorna o valor V)
    b = b || 1
    c = c || 1
    return a + b + c
}

console.log(soma1())
console.log(soma1(3))
console.log(soma1(1, 2, 3))
console.log(soma1(0, 0, 0)) // como o zero ele entende como falso, buga o valor padrao nesse caso

// Estrategia 2, 3 e 4 para gerar valor padrao
function soma2(a, b, c){
    a = a !== undefined ? a : 1 // estritamente diferente de undefined (senao poderia contar tmb o Null)
    b = 1 in arguments ? b : 1 // acessa o array arguments na posicao 1 (que é o b nesse caso)
    c = isNaN(c) ? 1 : c
    return a + b + c
}

console.log("********")

console.log(soma2())
console.log(soma2(3))
console.log(soma2(1, 2, 3))
console.log(soma2(0, 0, 0))

//valor padrao de ES2015 
function soma3(a =1, b = 1, c =1){
    return a + b + c
}

console.log("********")

console.log(soma3())
console.log(soma3(3))
console.log(soma3(1, 2, 3))
console.log(soma3(0, 0, 0))