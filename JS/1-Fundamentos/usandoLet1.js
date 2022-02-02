var num = 1;

{//procura primeiro no escopo interno(menor)
    let num = 2;
    console.log("Dentro = ", num);
}
console.log("Fora = ", num);

/*RESUMÃO!!
*VAR -> tem escopo GLOBAL e escopo de FUNCAO
*LET -> tem escopo GLOBAL, escopo de FUNCAO e BLOCO
*/