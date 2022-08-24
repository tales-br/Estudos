/*
    O this dentro de uma função, aponta para o objeto global
    O this fora de uma função, aponta para o objeto module.exports (ou exports)
    O this em arrow functions vão apontar para o objeto global
*/

console.log("(FORA)global", this === global)
console.log("(FORA)module", this === module)

console.log("(FORA)module.exports", this === module.exports)
console.log("(FORA)this", this === exports)

function logThis ()
{
    console.log("(DENTRO)global",this === global)

    console.log("(DENTRO)module.exports",this === module.exports)
    console.log("(DENTRO)exports",this === exports)

    this.danger = "Vai ficar visível globalmente..."
}

logThis()