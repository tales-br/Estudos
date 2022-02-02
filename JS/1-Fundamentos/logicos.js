// | simbolo pipe

function compras (trab1, trab2){
    const comprarSorvete = trab1 || trab2;
    const comprarTv50 = trab1 && trab2;
    //bitwiser (xor)
    //const comprarTv32 = !!(trab1 ^ trab2);
    const comprarTv32 = trab1 != trab2;
    const manterSaudavel = !comprarSorvete;

    return { comprarSorvete, comprarTv50, comprarTv32, manterSaudavel}; //o ES já coloca no objeto, pra n ter redundancia, a chavce: valor automaticamente "referencia" 
    /*
    return { comprarSorvete: comprarSorvete, comprarTv50: comprarTv50, comprarTv32: comprarTv32, manterSaudavel: manterSaudavel};
    
    //ouuuu mais arrumado
    return { sorvete: comprarSorvete, Tv50: comprarTv50, Tv32: comprarTv32, Saudavel: manterSaudavel};
    */
}

console.log(compras (true, true));
console.log(compras (true, false));
console.log(compras (false, false));
console.log(compras (false, true));