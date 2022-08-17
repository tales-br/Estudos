const _ = require("lodash") /*  1 - No caso do lodash é costume se usar o underline para referenciar a biblioteca
                                2 - Não precisa passar o caminho relativo, pq ele vai buscar primeiro na pasta node_modules (depois nas pastas acima) por esse módulo*/

//Testando!
setInterval(()=> console.log(_.random(1, 1000)), 3000)