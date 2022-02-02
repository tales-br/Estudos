const imprimeResultado = function (nota) {
    if (nota >= 7){
        console.log("Aprovado")
    } else {
        console.log("Reprovado!")
    }
}

imprimeResultado(10)
imprimeResultado(1)
imprimeResultado("Opa! Deu ruim!")//cuidado! por ser fracamente tipado, o JS permite passar qlqr coisa 
