// Refatorando usandoCallback.js para utilizar promise!

const http = require('http')

const getTurma = letra => {
    const url = `http://files.cod3r.com.br/curso-js/turma${letra}.json`
    return new Promise((resolve, reject) => {
        http.get(url, res => {
            let resultado = ''
    
            res.on('data', dados => {
                resultado += dados
            })
    
            res.on('end', () => {
                try {
                    resolve(JSON.parse(resultado))
                } catch(e) {
                    reject(e)
                }
            })
        })
    })
}

/* Usando callback
 let nomes = []
 getTurma('A').then(alunos => {
     nomes = nomes.concat(alunos.map(a => `A: ${a.nome}`))
     getTurma('B').then(alunos => {
         nomes = nomes.concat(alunos.map(a => `B: ${a.nome}`))
         getTurma('C').then(alunos => {
             nomes = nomes.concat(alunos.map(a => `C: ${a.nome}`))
             console.log(nomes)
         })
     })
 })
*/~

//Lembrando que cada then passa o seu resultado para o próximo
 //Explicando o óbvio abaixo.... só como exercício de fixação
Promise.all([getTurma('A'), getTurma('B'), getTurma('C')])
    .then(turmas => [].concat(...turmas)) //Concatena o resultado em um array vazio
    .then(alunos => alunos.map(aluno => aluno.nome)) //Pega o array anterior (já populado) e extrai só os nomes
    .then(nomes => console.log(nomes)) //Mostra o resultado
    .catch(e => console.log(e.message)) //SEMPRE CAPTURE O REJECT!!!!!!!!!!!!!!!!!!!!!!!

getTurma('D').catch(e => console.log(e.message))

/* Saída:

[
  'Kellia',   'Hi',     'Inge',
  'Myrle',    'Doreen', 'Pennie',
  'Faye',     'Leena',  'Taylor',
  'Juieta',   'Rossie', 'Mary',
  'Dionysus', 'Myca',   'Sharlene',
  'Meghan',   'Perice', 'Micheil',
  'Nat',      'Bone',   'Kellina',
  'Barrie',   'Darda',  'Rainer',
  'Joan',     'Kasper', 'Sammie',
  'Scott',    'Kiel',   'Dell'
]
Unexpected token < in JSON at position 0

*/