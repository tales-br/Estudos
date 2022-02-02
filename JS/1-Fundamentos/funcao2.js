//Armazenando funcao em um variavel (lol)
const imprimirSoma = function (a, b)
{
    console.log(a + b);
}

imprimirSoma(2, 3);

//Armazenando uma funcao arrow em uma variavel
const soma = (a,b) => {
    return a + b;
}

console.log(soma(2, 2));

/*retorno implicito
*Funcao com uma unica sentenca
*por ter uma linha, ele retorna o
*valor sem a necessidade do "return"
*/
const subtracao = (a, b) => a - b; //se houvesse apenas um parametro, n precisaria do parentese
console.log(subtracao(4, 1));

const imprimir = a => console.log(a);
imprimir(2);