function soBoaNoticia (nota){
    if (nota >=7){
        console.log("Aprovado com: " + nota)
    }
}

soBoaNoticia(8.1)
soBoaNoticia(6.1)

function seForVerdadeEuPrinto(valor){
    if(valor){
        console.log("Eh verdade: " + valor)
    }
}

//false
seForVerdadeEuPrinto()//deixar vazio é preenchido como undefined
seForVerdadeEuPrinto(null)
seForVerdadeEuPrinto(undefined)
seForVerdadeEuPrinto(NaN)//not a number
seForVerdadeEuPrinto("")
seForVerdadeEuPrinto(0)

//verdadeiros
seForVerdadeEuPrinto(-1)
seForVerdadeEuPrinto(" ")
seForVerdadeEuPrinto("?")
seForVerdadeEuPrinto([])
seForVerdadeEuPrinto([1, 2])
seForVerdadeEuPrinto({})
