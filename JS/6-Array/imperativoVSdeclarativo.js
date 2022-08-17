const alunos =
[
    {nome: "Tales", nota: 10},
    {nome: "Tainá", nota: 9.8}
]

//Imperativo
let total1 = 0
for (let i = 0; i < alunos.length; i++)
{
    total1 += alunos[i].nota
}
console.log(total1 / alunos.length)

//Declarativo

let total2 = 0

const getAluno = e => e.nota
const soma = (total, atual) => total + atual

total2 = alunos.map(getAluno).reduce(soma)

console.log(total2 / alunos.length)