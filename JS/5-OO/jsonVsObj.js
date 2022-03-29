const obj = 
{
    a: 1,
    b: 2,
    c: 3,
    soma ()
    {
        return a + b + c
    }
}

console.log(JSON.stringify(obj))
console.log(JSON.parse('{"a": 1, "b": 2, "c": 3}'))
console.log(JSON.parse('{"a": 1.22, "b": [2, 2.5, 2.75], "c": {}, "d": "isso é uma string"}'))