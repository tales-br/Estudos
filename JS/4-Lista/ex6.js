/*
06) Elabore duas funções que recebem três parâmetros: capital inicial, taxa de juros e tempo de aplicação. A
primeira função retornará o montante da aplicação financeira sob o regime de juros simples e a segunda
retornará o valor da aplicação sob o regime de juros compostos.
*/

/*
Relembrar é viver!
C = Capital inicial (principal)
J = Juros
t = tempo
i = taxa de juros (unitário)
M = montante
M = C + J

****para o simples****
J = C*i*t/100

****para o composto****
M = C * (1+i)^t
J = M - C
*/

const capitalInic = 3000
const juros = 0.007361
const tempoAplic = 12

function calcJurosSimples (vlrCapInic, vlrJuros, tempoAplic){
    let simples = vlrCapInic + (vlrCapInic * vlrJuros * tempoAplic) //poderia ter retornado direto sem o uso de uma variável
    return simples
}

function calcJurosCompostos (vlrCapInic, vlrJuros, tempoAplic){
    let composto = vlrCapInic * (1 + vlrJuros) ** tempoAplic
    return composto
}
console.log(`
Capital Inicial:   R$${capitalInic.toFixed(2).toString().replace(".",",")}
Juros:             ${(juros*100).toFixed(3).toString().replace(".",",")}%
Tempo Aplicado:    ${tempoAplic} Meses
-------------------
Juros Simples:     R$${calcJurosSimples(capitalInic, juros, tempoAplic).toFixed(2).toString().replace(".", ",")}
Juros Compostos:   R$${calcJurosCompostos(capitalInic, juros, tempoAplic).toFixed(2).toString().replace(".", ",")}
`)