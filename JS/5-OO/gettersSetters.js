//cria um nivel de "encapsulamento"

const sequencia = 
{
    _valor: 1, //convencionasse colocar underline para mostrar que a variável é privada (acessada somente no escopo do objto/funcao)
    get valor() { return this._valor++},
    set valor(valor) //rola aqui um tipo de sobrecarga XD
    {
        if (valor > this.valor)
        {
            this._valor = valor
        }
    }
}

console.log(sequencia.valor, sequencia._valor)
sequencia.valor = 1000
console.log(sequencia.valor, sequencia._valor)
sequencia.valor = 900
console.log(sequencia.valor, sequencia._valor) // nao vai deixar por conta do if.. nice!