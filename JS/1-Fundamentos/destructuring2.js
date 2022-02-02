const [a] = [10];
console.log(a);

const [n1, ,n3, ,n5, n6 = 0] = [10, 7, 9, 8];
console.log(n1, n3, n5, n6);

//nao eh pratico.. nem eh uma boa pratica (mas funciona)

const [, [, nota]] = [[, 8, 8], [9, 6, 8]];
console.log(nota);