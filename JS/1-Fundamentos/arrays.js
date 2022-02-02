const valoresArray = [7.7, 8.9, 6.6, 9.2];
console.log(valoresArray[0], valoresArray[3]);

console.log(valoresArray[4]);

valoresArray[4]=10;

console.log(valoresArray[4]);
console.log(valoresArray.length);

valoresArray.push({id:1}, false, null, "teste");//id 1 é objeto

console.log(valoresArray);

console.log(valoresArray.pop());//retira o ultimo item do array (sacado)
delete valoresArray[0]; //tira atributos de um objeto
console.log(valoresArray);

console.log(typeof valoresArray);