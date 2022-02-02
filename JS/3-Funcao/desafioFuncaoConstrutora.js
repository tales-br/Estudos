function Pessoa (nome){
    this.nome = nome
    
    this.falar =function dizer(){
        console.log(`Meu nome é ${this.nome}`)
    }
}

const p1 = new Pessoa("Tales")

p1.falar()