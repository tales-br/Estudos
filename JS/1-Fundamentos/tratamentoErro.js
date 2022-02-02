function tratarErroELancar (erro) {
/*//Pode ser tmb

throw new Error("...")
throw 10
throw trues
throw "Mensagem"

*/
    throw {
        nome: erro.name,
        msg: erro.message,
        date: new Date
    }
}

function imprimeNomeGritado (obj) {
    try {
        console.log(obj.name.toUpperCase() + "!!!")
    } catch(e){
        tratarErroELancar(e)
    } finally{ //executa independentemente se der erro ou não!!! Ter atencao!!
        console.log("FIM")
    }
}

const obj = {nome: "Tales"} //nome escrito com 'o' pra dar erro proposital
imprimeNomeGritado(obj)