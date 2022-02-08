/*
18) Faça um programa que leia um número entre 0 e 10, e escreva este número por extenso. Use o comando
switch. Crie um case default que escreva ‘Número fora do intervalo.’
*/

function porExtenso(num)
{
    switch(num)
    {
        case 0:
            return "PT: Zero | EN: Zero | ES: Cero | FR: Zéro | CH: Ling"
        case 1:
            return "PT: Um | EN: One | ES: Uno | FR: Un | CH: Yi"
        case 2:
            return "PT: Dois | EN: Two | ES: Dos | FR: Deux | CH: Er"
        case 3:
            return "PT: Três | EN: Three | ES: Tres | FR: Trois | CH: San"
        case 4:
            return "PT: Quatro | EN: Four | ES: Quatro | FR: Quatre | CH: Si"
        case 5:
            return "PT: Cinco | EN: Five | ES: Cinco | FR: Cinq | CH: Wu"
        case 6:
            return "PT: Seis | EN: Six | ES: Seis | FR: Six | CH: Liu"
        case 7:
            return "PT: Sete | EN: Seven | ES: Siete | FR: Sept | CH: Ch'i, Shang"
        case 8:
            return "PT: Oito | EN: Eight | ES: Ocho | FR: Huit | CH: Bā, Lu"
        case 9:
            return "PT: Nove | EN: Nine | ES: Nueve | FR: Neuf | CH: Jiu, Xiang"
        case 10:
            return "PT: Dez | EN: Ten | ES: Diez | FR: Dix | CH: Shí, Huā"
        default:
            return "Número fora do intervalo."
    }
}

console.log(porExtenso(0))
console.log(porExtenso(10))
console.log(porExtenso(9))
console.log(porExtenso(3))
console.log(porExtenso(55))
console.log(porExtenso(7))