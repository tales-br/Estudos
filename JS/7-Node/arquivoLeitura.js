const fs = require("fs") //File System é core do NODE
const { parse } = require("path")

//__dirname -> Está em todos os módulos do node, e representa o diretório atual. No caso abaixo, não precisei dizer o caminho absoluto (pois foi concatenado o __dirname)

const caminho = __dirname + "/arquivo.json"

/*
    De forma síncrona:
        Fica dentro do event looping (não delega o IO), ou seja, se o arquivo for grande, vai barrar o node
*/

const conteudo = fs.readFileSync(caminho, 'utf-8')
console.log(conteudo)

const configSync = require("./arquivo.json") // já lê direto o arquivos JSON (de forma síncrona) - IMPORTANTE: explicitar a extensão .json
console.log(configSync)


//De forma assíncrona

fs.readFile(caminho, "utf-8",(err, conteudo) => {
    if (err) throw err

    const config = JSON.parse(conteudo)

    console.log(`${config.db.host}:${config.db.port}`)
    })

fs.readdir(__dirname, (err, diretorios) =>{
    if (err) throw err
    console.log("Conteúdo da pasta: ")
    console.log(diretorios)
    })