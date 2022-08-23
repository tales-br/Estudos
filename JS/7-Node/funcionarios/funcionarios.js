const url = "http://files.cod3r.com.br/curso-js/funcionarios.json"

const axios = require("axios")

//Desafio: Funcionaria chinesa com menor salario 

const cidade = funcionarios => funcionarios.pais == "China"

const genero = funcionarios => funcionarios.genero == "F"

const menorSalario = (func, funcAtual) => 
{
    return func.salario < funcAtual.salario ? func : funcAtual
}
 

    axios.get(url).then(response =>
        {
            const funcs = response.data
            module.exports = funcs
    
            console.log
            (
            funcs
                .filter(cidade)
                .filter(genero)
                .reduce(menorSalario)
            )
        }
    )