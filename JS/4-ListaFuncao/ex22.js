/*
22)​ Criar uma função para calcular o valor a ser pago de anuidade de uma associação. 
A função recebe como parâmetro um inteiro que representa o mês (1 - janeiro, 2 - fevereiro...) que foi paga 
e o valor da anuidade. 
A anuidade deve ser paga no mês de janeiro. 
Por mês, é cobrado 5% de juros (sob o regime de juros compostos). 
O retorno deve ser o valor a ser pago para o respectivo mês escolhido
*/

function calcAnuidade (mesPago, valorAnuidade)
{
    let valorFinal

    valorFinal = valorAnuidade * (1 + 0.05) ** (mesPago-1)  

    return valorFinal.toFixed(2)
}

console.log(calcAnuidade(1, 100))
console.log(calcAnuidade(2, 100))
console.log(calcAnuidade(3, 100))
console.log(calcAnuidade(12, 100))