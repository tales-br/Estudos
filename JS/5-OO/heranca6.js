function Aula(nome, videoID) {
    this.nome = nome
    this.videoID = videoID
}

const aula1 = new Aula("Ola", 123)
const aula2 = new Aula("Tchau", 321)

console.log(aula1, aula2)

//o new é assim, no final das contas

function novo(f, ...params) {
    const obj = {}
    obj.__proto__ = f.prototype
    f.apply(obj, params)
    return obj
}

const aula3 = novo(Aula, "Ola", 123)
const aula4 = novo(Aula, "Tchau", 321)

console.log(aula3, aula4)