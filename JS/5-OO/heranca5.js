console.log(typeof String)
console.log(typeof Array)
console.log(typeof Object)

String.prototype.reverse = function ()
{
    return this.split('').reverse().join('')
}

console.log("Tales".reverse())



Array.prototype.first = function ()
{
    return this[0]
}

console.log([1, 2, 3].first())
console.log(["A", "B", "C"].first())

//muita flexibildade... deixa substituir métodos cânones....
String.prototype.toString = function ()
{
    return ")ODADIUC OTIUUUUM RAMOT UO( !ossi rezaf oãn rohleM"
}

console.log("Tales".reverse())