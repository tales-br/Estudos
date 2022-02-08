/*
17) Um funcionário irá receber um aumento de acordo com o seu plano de
trabalho, de acordo com a tabela abaixo:
Plano Aumento
A 10%
B 15%
C 20%
Faça uma função que leia o plano de trabalho e o salário atual de um funcionário e calcula e imprime o seu
novo salário. Use a estrutura switch e faça um caso default que indique que o plano é inválido.
*/

function calcAumento(plan, salario) 
{
    let novoSalario

    switch (plan)
    {
        case 'a':
            novoSalario = salario * 1.1
            return novoSalario

        case 'b':
            novoSalario = salario * 1.15
            return novoSalario

        case 'c':
            novoSalario = salario * 1.2
            return novoSalario

        default:
            return "Plano inválido"
    }    
}

console.log(calcAumento("a", 1000))
console.log(calcAumento("b", 1000))
console.log(calcAumento("c", 1000))
console.log(calcAumento("d", 1000))