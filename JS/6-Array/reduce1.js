const alunos =
[
    {nome: "Tales", nota:10, bolsista: true},
    {nome: "Tainá", nota:10, bolsista: true},
    {nome: "Tainá", nota:10, bolsista: true},
    {nome: "Fulano", nota:9.5, bolsista: false}
]

console.log(alunos.map(a => a.nota))

const resultado = alunos.map(a => a.nota).reduce(function(acumulador, atual)
{
    console.log(acumulador, atual)
    return acumulador + atual
}, 0) //ou pode deixar sem o zero

console.log(resultado)