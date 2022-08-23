/*Importar:
    1- É possível importar os módulos direto das pasta acessando o arquivo index.js (caso tenha) do módulo
        Ex.: na pasta node_modules, para cada módulo, existe um index.js. Pode-se também criar para os próprios módulos dentro
        das respectivas pastas, um arquivo indexador (index.js) para acessá-lo -> require("caminho") [OMITINDO A CHAMADA DO ARQUIVO INDEX.JS]
*/

//Navegando entre as pastas para importar os módulos
const moduloA = require('../../../moduloA')

const moduloB = require('../../../moduloB') 

const http = require('http') //está contido dentro da biblioteca padrão do js

console.log(moduloA.bemVindo)

console.log(moduloB.bomDia)

