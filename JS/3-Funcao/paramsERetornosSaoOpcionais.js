// obs: n é interessante (ao meu ver) nao ter retorno da funcao, pois ela pode gerar algum problema no programa retornando undefined

function area (largura, altura){
    const area = largura * altura
    if (area > 20){
        console.log(`Valor acima do permitido ${area}m²`)
    }
    else {
        return area
    }
}

console.log(area(2, 2))
console.log(area(2))
console.log(area())
console.log(area(2, 3, 4, 5, 6, 7, 8))
console.log(area(6, 5))