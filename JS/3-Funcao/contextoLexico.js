const valor = 'Global'

function minhaFunc(){
    console.log(valor)
}

function exec (){
    const valor = 'Local'
    minhaFunc()
}

exec()