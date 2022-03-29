Array.prototype.forEach2 = function (callback)
{
    for (let i = 0; i < this.lenght; i++)
    {
        callback(this[i], i, this)
    }
}



const aprovados = ["Agatha", "Bruno", "Carlos", "Daniel"]

aprovados.forEach2(function(nome, indice)//, array)
{
    //console.log(array)
    console.log(`${indice + 1}) ${nome}`)
})
