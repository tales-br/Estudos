//Padrão middleware (chain of responsability)

const passo1 = (contexto, proximo) => {
    contexto.valor1 = "mid1"
    proximo()
}

const passo2 = (contexto, proximo) => {
    contexto.valor2 = "mid2"
    proximo()
}

const passo3 = contexto => {
    contexto.valor3 = "mid3"
}

//Usando recursividade para percorrer o array de middlewares
const exec = (contexto, ...middlewares) => {
    const execMiddlewares = i => {
        middlewares && i < middlewares.length && middlewares[i](contexto, () => execMiddlewares(i + 1))
    }
    execMiddlewares(0)
}

let contexto = {}

exec(contexto, passo1, passo2, passo3)
console.log(contexto)

contexto = {}
exec(contexto, passo2, passo1, passo3)
console.log(contexto)