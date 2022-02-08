/*
16) Utilizando a estrutura do Switch faça um programa que simule uma calculadora básica. O programa recebe como parâmetros
dois valores numéricos e uma string referente à operação e a realize com os valores numéricos na ordem que foram inseridos.
Por exemplo: calculadora (2, ‘+’, 3). A função efetuará a soma de 2 e 3. 
Dica: Os sinais das operações são: ‘+’. ‘-’, ‘*’ e ‘/’. 
Crie um caso default para operações inválidas.
*/

function calc(num1, expr, num2)
{
    
    switch (expr)
    {
    case "+":
        result = num1 + num2
        console.log(`${num1} ${expr} ${num2} = ${result}`)
        break
    case "-":
        result = num1 - num2
        console.log(`${num1} ${expr} ${num2} = ${result}`)
        break
    case "*":
        result = num1 * num2
        console.log(`${num1} ${expr} ${num2} = ${result}`)
        break
    case "/":
        result = num1 / num2
        console.log(`${num1} ${expr} ${num2} = ${result}`)
        break
    default:
        console.log("Operacao Invalida")
    }

}

calc(2, "+", 2)
calc(2, "*", 2)
calc(2, "-", 2)
calc(2, "/", 2)
calc(2, "**", 2)