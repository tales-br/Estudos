Array.prototype.reduce2 = function(callback, valorIni)
{
    //SEM A OPÇÃO DE PASSAR UM PRIMEIRO VALOR PARA A CALLBACK! (Precisa tirar o valor inicial da função)
    /*
    let acumulador = this[0]
    for(let i = 1; i < this.length; i++)
    {
        acumulador = callback(acumulador, this[i], i, this)
    }
    */

    //COM A OPÇÃO DO PRIMEIRO VALOR

    const indiceIni = valorIni ? 0 : 1
    let acumulador = valorIni || this[0]
    for(let i = indiceIni; i< this.length; i++)
    {
        acumulador = callback(acumulador, this[i], i, this)
    }

    return acumulador
}


const soma = (total, valor) => total + valor

const nums = [1, 2, 3, 4, 5, 6]

console.log(nums.reduce2(soma))