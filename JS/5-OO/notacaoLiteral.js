const a = 1
const b = 2
const c = 3

const obj1 = {a: a, b: b, c: c}
console.log(obj1)

const obj2 = {a, b, c}
console.log(obj2)

//***********************

const nomeAtr = "nota"
const valorAtr = 9.8

const obj3 = {}
obj3[nomeAtr] = valorAtr
console.log(obj3)

const obj4 = {[nomeAtr]: valorAtr}
console.log(obj4)

//***********************

const obj5 = {
    
    funcao1: function()
    {
        //funcao...
    },
    
    funcao2 ()
    {
        //funcao...
    }   
}

console.log(obj5)