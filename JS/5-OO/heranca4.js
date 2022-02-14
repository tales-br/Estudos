function meuObjeto (){}

console.log(meuObjeto.prototype)

const obj1 = new meuObjeto
const obj2 = new meuObjeto
console.log(obj1.__proto__ == obj2.__proto__)
console.log(meuObjeto.prototype == obj1.__proto__)

meuObjeto.prototype.nome = "Anonimus"
meuObjeto.prototype.falar = function ()
{
    console.log(`Bom dia! Meu nome é ${this.nome}!`)
}

//resumo da doideira
console.log((new meuObjeto).__proto__ === meuObjeto.prototype)
console.log(meuObjeto.__proto__ === Function.prototype)
console.log(Function.prototype.__proto__ === Object.prototype)