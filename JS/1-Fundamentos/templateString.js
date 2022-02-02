const nome = "Tales";
const concatenacao = "Hello " + nome.concat("!");
const template = `
    Hello
    ${nome}!!!`;
console.log(concatenacao);
console.log(template);

//expressoes

console.log(`1 + 1 = ${1+1}`);

const maiusculo = txtParaMaiusculo => txtParaMaiusculo.toUpperCase(); //funcao!

console.log(`Nome maiusculo: ${maiusculo(nome)}`);