let estaAtivo = false;
console.log(estaAtivo);

estaAtivo = true;
console.log(estaAtivo);

estaAtivo = 1;
console.log(!!estaAtivo);

console.log(`-----
Os verdadeiros:
`);

console.log(!!3);
console.log(!!-1);
console.log(!!" ");
console.log(!!"teste");
console.log(!![]);
console.log(!!{});
console.log(!!Infinity);
console.log(!!(estaAtivo = Infinity));//pega o valor da atribuição e não o valor final da operacao

console.log(`-----
Os falsos:
`);

console.log(!!0);
console.log(!!'');//qlqr string vazia
console.log(!!null);
console.log(!!NaN);
console.log(!!undefined);
console.log(!!(estaAtivo = false));
console.log(!!""|| null || 0 || "Teste"); //retorna o primeiro verdadeiro

//exemplo do de cima
let nome ="";
console.log(nome || "Nome vazio!");//ver linha 28 e 33
nome = "Tales"
console.log(nome || "Nome vazio!");