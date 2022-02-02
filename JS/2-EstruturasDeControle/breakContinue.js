const num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

for (let i in num){
    if (i == 5){
        break
    }
    console.log(`Indice (${i}) - ${num[i]}`)
}

console.log(`-----------------`)

for (let i in num){
    if (i == 5){
        continue
    }
    console.log(`Indice2 (${i}) - ${num[i]}`)
}
