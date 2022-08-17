const escola = 
[
    {
        turma: "Turma1",
        alunos:
        [
            {
                nome: "Tales",
                nota: 10
            },
            {
                nome: "Tainá",
                nota: 9.5
            }
        ]
    },
    {
        turma: "Turma2",
        alunos:
        [
            {
                nome: "Túlio",
                nota: 7
            },
            {
                nome: "Tibério",
                nota: 8
            }
        ]
    }
]

const getNotaAluno = aluno => aluno.nota

const getNotaTurma = turma => turma.alunos.map(getNotaAluno)

const notas1 = escola.map(getNotaTurma)

console.log("RETORNO SEM FLAT>",notas1)

const notas2 = escola.flatMap(getNotaTurma)

console.log("RETORNO COM FLAT>",notas2)