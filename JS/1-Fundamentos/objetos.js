const prod1 = {};//conjunto de chave + valor
prod1.nome = `Notebook`;
prod1.preco = 3200.90;
prod1.marca = `HP`;
prod1[`Estoque disponível`] = true; //com espaco ((não acho uma boa))

console.log(prod1);

const prod2 = 
{
    nome: "Celular",
    preco: 1600.99,
    marca: "Samsung",
    config:{
        processador:"SnapDragon",
        memoRam:"8GB",
        memoRom:"128GB",
    }

}
console.log(prod2);
