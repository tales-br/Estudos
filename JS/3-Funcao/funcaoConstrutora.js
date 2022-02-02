function Carro(veloMax = 200, delta = 5){
    //atributo private
    let veloAtual = 0

    //atributo public é com this!
    this.acelerar = function (){
        if (veloAtual + delta <= veloMax){
            veloAtual += delta
        }
        else
        {
            veloAtual = veloMax 
        }
    }

    this.getVelo = function (){
        return veloAtual
    }
}

const uno = new Carro()//como nao esta sendo passado nada pra funcao, poderia ser omitido
uno.acelerar()
console.log(uno.getVelo())

const ferrari = new Carro(350 , 20)
ferrari.acelerar()
ferrari.acelerar()
ferrari.acelerar()
console.log(ferrari.getVelo())