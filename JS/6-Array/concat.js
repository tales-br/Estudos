const primeiro = [1, 2, 3, 4]
const segundo = [5, 6, 7, 8, 9, 10]

const terceiro = primeiro.concat(segundo)

console.log(primeiro, segundo, terceiro)

//Outro ex.:
console.log([].concat(['a', 'b'], ['c', 'd'], 'e', [['f', 'g']]))