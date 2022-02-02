const pessoa = {
    saudacao: "Ola!",
    falar (){
        console.log(this.saudacao)
    }
}

pessoa.falar()

const falar = pessoa.falar

falar() // conflito entre paradigmas: Funcional e OO!!!!!!

const falarDePessoa = pessoa.falar.bind(pessoa) //o bind dá bind -_- ... e vincula (é resolvido como o argumento da funcao)
falarDePessoa()