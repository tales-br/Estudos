/*
01)​ Crie uma função que dado dois valores (passados como parâmetros) mostre no console a soma, subtração,
multiplicação e divisão desses valores.
*/


function calc (val1, val2){
    const div = () => 
    {
        if(val1 == 0 || val2 == 0)
        {
            return "Divisão por 0 não permitida"
        }
        else
        {
           return val1 >= val2 ? (val1 / val2).toFixed(2) : (val2 / val1).toFixed(2)
        }
    }
    console.log(
`Soma = ${val1+val2}
Subtração = ${val1 >= val2 ? val1 - val2 : val2 - val1}
Multiplicação = ${val1 * val2}
Divisão = ${div()}`)
}

calc(1.2, 15)
