/*
12) Faça um algoritmo que calcule o fatorial de um número.
*/

function fatorial (num)
{
    let calc = num

    if(num<0)
    {
        console.log("Não existe fatorial negativo")
        return null
    }
    else
    {
        if (num==0)
        {
            return 1
        }
        else
        {
            for(let i = 1; i<num; i++)
            {
                calc *=  i
            }

            return calc
        }
    }
}

console.log(fatorial(-10))

console.log(fatorial(10))