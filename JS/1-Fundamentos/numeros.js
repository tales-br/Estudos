const peso1 = 1.0;
const peso2 = Number("2.0");

console.log(peso1, peso2);
console.log(Number.isInteger(peso1), Number.isInteger(peso2));

const avaliaco1 = 9.871;
const avaliaco2 = 6.871;
const total = avaliaco1 * peso1 + avaliaco2 * peso2;
const media = total / (peso1 + peso2);

console.log(media.toFixed(2));
console.log(media.toString());//transforma em string
console.log(media.toString(2));//transforma em binario
console.log(typeof media);