require("./global")

console.log(minhaApp.saudacao())

minhaApp.nome = "Vish, mudou!"

console.log(minhaApp.nome) //Não alterou pois foi incluído Object.freeze!