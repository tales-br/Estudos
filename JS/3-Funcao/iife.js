//IIFE = Immediately invoked function expression

(
    function (){
        console.log(`Será chamada imediatamente no script! Uma estratégia para fugir do escopo global... 
Aqui dá para definir variaveis que "Não tocam" o window ou o global... Noice!`)
    }
)()