package aula1_1.pkg2;

public class Pessoa 
{
    private String nome;
    private int idade;
    
    public Pessoa (String nome, int idade)
    {
        this.nome = nome;
        this.idade = idade;
    }
    
    public void setNome(String ValNome)
    {
        nome = ValNome;
    }
    
    public void setIdade(int ValIdade)
    {
        idade = ValIdade;
    }
    
    void printPessoa ()
    {
        System.out.printf("Nome: %s || Idade: %d",nome, idade);
    }
}
