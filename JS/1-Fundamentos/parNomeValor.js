//par nome/valor
const saudacao = "Opa!";

function exec ()
{
    const saudacao = "Fala ae!";
    return saudacao;
}

//objetos sao agrupados aninhados de pares nome/valor

const cliente = {
    nome: "Tales",
    idade: 33,
    peso: 75,
    endereco:{
        rua: "Padre",
        numero: 182
    }
}

console.log(saudacao);
console.log(exec());
console.log(cliente);