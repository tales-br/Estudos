const ferrari = 
{
    modelo: "F40",
    velMax: 324
}

const volvo = 
{
    modelo: "V40",
    velMax: 200
}

console.log(ferrari.prototype) // objetos n tem o atributo prototype.. só o __proto__
console.log(ferrari.__proto__) //procura em toda a cadeia de prototipos
console.log(ferrari.__proto__ === Object.prototype) 
console.log(volvo.__proto__ === Object.prototype) 
console.log(Object.prototype.__proto__ === null)

function meuObjeto () {}

console.log(typeof Object, typeof meuObjeto)
console.log(Object.prototype,meuObjeto.prototype)