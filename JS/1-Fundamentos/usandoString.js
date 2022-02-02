const escola = "unicarioca";

console.log(escola.indexOf("r"));
console.log(escola.charAt(5)); //comeca com indice 0
console.log(escola.charCodeAt(5)); //retorna o valor do char na unicode
console.log(escola.substring(5, 8));

console.log("Centro universitario ".concat(escola) + ", onde atualmente estudo!");
console.log(escola.replace("i","1"));
console.log(escola.replace(/\w/g,"^"));

console.log("CC,EngC,AnaSis".split(","));