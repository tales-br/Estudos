// funcao em JS é first-class object (citizens)!
// higher-order function

// criar de forma literal
function fun1() { }
function fun2() { }

// armazenar em um array
const array = [function (a, b) {return a + b}, fun1, fun2]
console.log(array[0](2, 3))

// armazenar em um atributo de um objeto
const obj = {}
obj.falar = function () { return "Opa!!!"}
console.log(obj.falar())

// passar funcao como param
function run(fun){
    fun ()
}

run (function () {console.log ("Executando") })