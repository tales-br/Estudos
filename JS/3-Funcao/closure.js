// Closure é o escopo criado quando uma função é declarada
// Esse escopo permite a função acessar e manipular variáves externas à função

// Contexto léxico em action!

const x = "Global"

function fora(){
    const x = "Local"
    function dentro(){
        return x
    }
    return dentro
}

const minhaFunc = fora()

console.log(minhaFunc())