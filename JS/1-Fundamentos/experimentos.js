let a = 3

global.b = 123

this.c = 456
this.d = false
this.e = "Teste"

console.log(a)
console.log(global.b)
console.log(this.c)
console.log(module.exports.c)
console.log(module.exports === this)
console.log(module.exports)

//criando variavel sem var e let (doida)
abc = 22 //Pééééééssima prática!!!!!!!!!!!!

console.log(global.abc)