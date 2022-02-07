//usando notacao literal

const obj1 = {}
console.log(obj1)

//Object em JS
console.log(typeof new Object, typeof Object)

const obj2 = new Object
console.log(obj2)

//funcoes construtoras
function Produto (nome, preco, desc)
{
    this.nome = nome //public!!!
    this.getPrecoComDesconto = () =>
    {
        return ((preco) * (1 - desc)).toFixed(2)
    } 
}

const p1 = new Produto ("Caneta", 7.99, 0.1)
const p2 = new Produto ("NoteDosSonhos", 7000.99, 0.2)
console.log(p1.getPrecoComDesconto(), p2.getPrecoComDesconto())

//funcao factory
function criarFuncionario (nome, salarioBase, faltas)
{
    return { //retorna um objeto
        nome,
        salarioBase,
        faltas,
        getSalario()
        {
            return ((salarioBase / 30) * (30 - faltas)).toFixed(2)
        }
    } 
}

const f1 = criarFuncionario("Joao", 5000, 2)
const f2 = criarFuncionario("Maria", 7000, 4)
console.log(f1.getSalario(), f2.getSalario())

//Object.Create
const filha = Object.create(null)
filha.nome = "ana"
console.log(filha)