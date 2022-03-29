console.log(typeof Array, typeof new Array, typeof [])

let aprovados = new Array("Tales", "Taina", "Tiago")

console.log(aprovados)

aprovados = ["Tales", "Taina", "Tiago"]

console.log(aprovados[0])
console.log(aprovados[1])
console.log(aprovados[2])
console.log(aprovados[3])

aprovados[3] = "Tarcila"

aprovados.push("Tacio")

console.log(aprovados.length)

aprovados[9] = "Tabita"

console.log(aprovados.length)
console.log(aprovados[8] === undefined)

console.log(aprovados)

aprovados.sort()

console.log(aprovados)

delete aprovados[1]

console.log(aprovados[1])
console.log(aprovados[2])

aprovados = ["Tales", "Taina", "Tiago"]
aprovados.splice(1, 1)//, "Elemento1") //pode adicionar n tmb...

console.log(aprovados)