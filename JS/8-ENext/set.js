// Não aceita repetição e também não é indexado!
const times = new Set()
times.add('Flamengo')
times.add('Botafogo').add('America').add('Volta Redonda')
times.add('Fluminense')
times.add('Flamengo')

console.log(times)
console.log(times.size)
console.log(times.has('flamengo'))
console.log(times.has('Flamengo'))
times.delete('Fluminense')
console.log(times.has('Fluminense'))

const nomes = ['Tales', 'Tainá', 'Túlio', 'Tainá']

//Posso passar direto um array para ele
const nomesSet = new Set(nomes)
console.log(nomesSet)