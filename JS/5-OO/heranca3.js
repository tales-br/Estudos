const pai = { nome: "Pedro", corCabelo: "Preto"}

const filha1 = Object.create(pai)
filha1.nome = "Ana"

console.log(filha1.corCabelo)

const filha2 = Object.create(pai,
    {
       nome: { value: "Bia", writable: false, enumerable: true} 
    })

console.log(filha2.nome)
filha2.nome = "Tentando alterar"
console.log(`${filha2.nome} tem cabelo ${filha2.corCabelo}`)

//só mostra o que não foi herdado!
console.log(Object.keys(filha1))
console.log(Object.keys(filha2))

//para mostrar tudo (e separar)
for (let key in filha2)
{
    filha2.hasOwnProperty(key) ?
        console.log(key) : console.log(`Por herança: ${key}`)
}