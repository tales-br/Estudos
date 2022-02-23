class Avo
{
    constructor (sobrenome)
    {
        this.sobrenome = sobrenome
    }
}

class Pai extends Avo
{
    constructor(sobrenome, trabalho ="Bancário")
    {
        super(sobrenome)
        this.profissao = trabalho
    }
}

class Filho extends Pai
{
    constructor()
    {
        super("Barbosa Rodrigues", "Analista")
    }
}

const f3 = new Filho

console.log(f3)