const alunos =
[
    {nome: "Tales", nota:10, bolsista: true},
    {nome: "Tainá", nota:10, bolsista: true},
    {nome: "Tainá", nota:10, bolsista: true},
    {nome: "Fulano", nota:9.5, bolsista: false}
]

//Desafio 1: Todos os alunos são bolsistas?

const todosBolsistas = (resultadoCallbackAnterior, ehBolsistaBoolean) => resultadoCallbackAnterior && ehBolsistaBoolean //Resultado e valor atual

console.log(alunos.map(a => a.bolsista).reduce(todosBolsistas))


//Desafio 2: Algum aluno é bolsista?

const algumBolsista = (callback, ehBolsista) => callback || ehBolsista

console.log(alunos.map(a => a.bolsista).reduce(algumBolsista))