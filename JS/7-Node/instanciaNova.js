//Criando uma factory
    //Uma factory retorna um objeto (NESSE CASO UMA NOVA INSTÂNCIA)

module.exports = () =>
{
    return{
        valor: 1,

        inc()
        {
            this.valor++
        }
    }
}