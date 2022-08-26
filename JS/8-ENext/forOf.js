const espaco = () => console.log("")

for (let letra of "Inconstitucionalicimamente")
{
    console.log(letra)
}

espaco()

const assuntosEcma = ['Map', 'Set', 'Promise']

for (let i in assuntosEcma)
{
    console.log(i)
}

espaco()

for (let assunto of assuntosEcma)
{
    console.log(assunto)
}

espaco()

const assuntosMap = new Map([
    ['Map', { abordado: true }],
    ['Set', { abordado: true }],
    ['Promise', { abordado: false }]
])

for (let assunto of assuntosMap)
{
    console.log(assunto)
}

espaco()

for (let chave of assuntosMap.keys())
{
    console.log(chave)
}

espaco()

for (let valor of assuntosMap.values())
{
    console.log(valor)
}

espaco()

for (let [chave, valor] of assuntosMap.entries())
{
    console.log(chave, valor)
}

espaco()

const s = new Set(['a', 'b', 'c'])
for (let letra of s) {
    console.log(letra)
}