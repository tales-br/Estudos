const fs = require("fs")

const produto = {
   celular: {
        nome: "Celular",
        preco: 1999.99,
        desconto: 0.15
    },
   coisa: {
        nome: "Coisa Cara",
        preco: 9999.99,
        desconto: 0.15
    }

}

fs.writeFile(__dirname + "/arquivoGerado.json", JSON.stringify(produto) ,(err) =>
{
    console.log(err || "Arquivo salvo!") //Usando a ideia de retorno booleano (nesse caso err pode ser True ou False)
})