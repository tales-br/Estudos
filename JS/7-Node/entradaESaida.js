//Deverá ser testado direto no terminal ex.: node entraESaida -a ou node entradaESaida -b 

const anonimo = process.argv.indexOf("-a") !== -1

if(anonimo)
{
    process.stdout.write("Fala anonimo!\n")
    process.exit()
}
else
{
    process.stdout.write("Informe o seu nome: ")
    process.stdin.on("data", data => {
        const nome = data.toString().replace("\n", "") //Acaba pegando também o enter
        process.stdout.write(`Fala ${nome}!\n`)
        process.exit()
    })
}