//Ler arquivo dados.txt neste diretório usando promisse e imprimir o resultado

const fs = require("fs")

let lerArquivo = new Promise(function(resolve, reject)
{
   try
    {
        fs.readFile(__dirname + "/dados.txt", "utf-8", function (err, data)
        {
            if (err)
            {
                throw (err)
            }
            else
            {
                resolve(data.toString())
            }

        })
    }
    catch(e)
    {
        reject(console.log(e))
    }  
})

lerArquivo
    .then(arquivo => console.log(arquivo))
    .catch(e => console.log(e))