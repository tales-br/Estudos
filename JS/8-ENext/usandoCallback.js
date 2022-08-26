// Sem promise...
const http = require('http') //Biblioteca nativa

const getTurma = (letra, callback) =>
{

    const url = `http://files.cod3r.com.br/curso-js/turma${letra.toUpperCase()}.json`

    http.get(url, res => {
        let resultado = ''

        //Ele vai receber uma stream de dados, precisamos ir agrupando...
        res.on('data', dados =>
        {
            resultado += dados
        })

        res.on('end', () =>
        {
            callback(JSON.parse(resultado))
        })
    })
}

let nomes = []

//CALL BACK HEEEEELL
getTurma('A', alunos => {
    nomes = nomes.concat(alunos.map(a => `A: ${a.nome}`))
    getTurma('B', alunos => {
        nomes = nomes.concat(alunos.map(a => `B: ${a.nome}`))
        getTurma('C', alunos => {
            nomes = nomes.concat(alunos.map(a => `C: ${a.nome}`))
            console.log(nomes)
        })
    })
})