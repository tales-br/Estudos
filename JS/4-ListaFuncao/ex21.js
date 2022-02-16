/*

21)​ Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do conveniado
considerando que todos pagam R$ 100 mais um adicional conforme a seguinte tabela:

1) crianças com menos de 10 anos pagam R$80;
2) conveniados com idade entre 10 e 30 anos pagam R$50;
3) conveniados com idade acima de 30 e até 60 anos pagam R$ 95;
4) conveniados acima de 60 anos pagam R$130.

*/


function valPlano (idade)
{
    let valorFinal = 100
    let faixa = [[1, "Crianças com menos de 10 anos", 80],[2, "Conveniados com idade entre 10 e 30 anos", 50],[3, "Conveniados com idade acima de 30 e até 60 anos", 95],[4, "conveniados acima de 60 anos", 130]]
    
    let numFaixa

    if (idade > 60)
    {
        numFaixa = 3
        valorFinal += faixa[numFaixa][2]
    }
    else if (idade > 30)
    {
        numFaixa = 2
        valorFinal += faixa[numFaixa][2]
    }
    else if (idade >= 10)
    {
        numFaixa = 1
        valorFinal += faixa[numFaixa][2]
    }
    else if (idade < 10)
    {
        numFaixa = 0
        valorFinal += faixa[numFaixa][2]
    }

    return imprimeResult(idade, valorFinal, faixa, numFaixa)

}

function imprimeResult (idade, valorFinal, faixa, numFaixa)
{
    return `Para a idade de: ${idade} anos ("${faixa[numFaixa][1]}") - Valor do plano: R$${valorFinal}`
}

console.log(valPlano(62))
console.log(valPlano(60))
console.log(valPlano(30))
console.log(valPlano(25))
console.log(valPlano(10))
console.log(valPlano(8))
console.log(valPlano(1))