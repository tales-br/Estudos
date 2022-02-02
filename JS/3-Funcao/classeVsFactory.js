//classe -> aqui o problema reside no "this", devido ao contexto léxico

class Pessoa {
    constructor(nome){
        this.nome = nome
    }

    falar(){
        console.log(`Meu nome é ${this.nome}`)
    }
}

const p1 = new Pessoa(`Tales`)

p1.falar()

//Factory

const CriarPessoa = nome => {
    return{
        falar: () => console.log(`Meu nome é ${nome}`)
    }
}

const p2 = CriarPessoa(`T4L3$`)

p2.falar()