function falarDepoisDe(segundos, frase) 
{
    return new Promise((resolve, reject) =>
    {
        setTimeout(() =>
        {
            resolve(frase) //Só aceita receber UM único parâmetro | Se obrigatóriamente precisar persistir mais de um valor, melhor usar um objt.. array...
        }, segundos * 1000)
    })
}

falarDepoisDe(3, 'Que legal!')
    .then(frase => frase.concat('?!?'))//Pode aninhar vários thens (recebem o valor passado pelo anterior)
    .then(outraFrase => console.log(outraFrase))
    .catch(e => console.log(e))//Para atender o reject!