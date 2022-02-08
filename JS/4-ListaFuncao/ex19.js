/*
19) O cardápio de uma lanchonete é o seguinte:
Código Descrição do Produto Preço
100 Cachorro Quente R$ 3,00
200 Hambúrguer Simples R$ 4,00
300 Cheeseburguer R$ 5,50
400 Bauru R$ 7,50
500 Refrigerante R$ 3,50
600 Suco R$ 2,80
Implemente uma função que receba como parâmetros o código do item pedido, a quantidade e calcule o valor
a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. Use o
comando switch. Crie um caso default para produto não existente.
*/

function calcPedido (item, qtd)
{
    //utilizei só para me familiarizar com arrays
    let produtos = [[100, "Cachorro Quente", 3],[200, "Hambúrguer Simples", 4],[300, "Cheeseburguer", 5.5],[400, "Bauru", 7.5],[500, "Refrigetante", 3.5],[600, "Suco", 2.8]]
    
    switch(item)
    {
        case 100:
            return "R$ " + (produtos[0][2] * qtd).toFixed(2)

        case 200:
            return "R$ " + (produtos[1][2] * qtd).toFixed(2)

        case 300:
            return "R$ " + (produtos[2][2] * qtd).toFixed(2)

        case 400:
            return "R$ " + (produtos[3][2] * qtd).toFixed(2)

        case 500:
            return "R$ " + (produtos[4][2] * qtd).toFixed(2)

        case 600:
            return "R$ " + (produtos[5][2] * qtd).toFixed(2)

        default:
            return "Item inválido!"
    }
}
console.log(calcPedido(100, 2))
console.log(calcPedido(700, 1))
console.log(calcPedido(400, 10))
console.log(calcPedido(200, 5))
console.log(calcPedido(300, 7))