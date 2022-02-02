let dobro = function(a) {
    return a * 2
}

dobro = (a) => {
    return a * 2
}

dobro = a => a * 2 // como é somente uma linha o return é implícito!

console.log(dobro(Math.PI))

let ola = function (){
    return "Olá"
}

ola = () => "Olá"

ola = _ => "Olá" //Atenção!! diferentemente da funcao de cima, aqui tem sim parâmetro, (o underline) mas simplesmente ignorasse... algumas pessoas utilizam dessa forma

console.log(ola())