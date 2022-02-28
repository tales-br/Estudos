const aprovados = ["Agatha", "Bruno", "Carlos", "Daniel"]

//o forEach recebe uma funcao call back com 3 parametros nessa ordem> 1- valor do elemento, 2- indicie e 3- o proprio array 
aprovados.forEach(function(nome, indice, array)
{
    console.log(array)
    console.log(`${indice + 1}) ${nome}`)
})

aprovados.forEach( (nome, indice) => console.log(nome, indice))

const exibirAprovados = aprovado => console.log(aprovado)

aprovados.forEach(exibirAprovados)