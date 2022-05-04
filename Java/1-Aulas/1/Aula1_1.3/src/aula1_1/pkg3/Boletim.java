package aula1_1.pkg3;

public class Boletim 
{
    private String nomeDisciplina = "Nome não definido!";
        
    //construtor!
    public Boletim (String nome)
    {
        this.nomeDisciplina = nome;
    }
    
    public void setNomeDisciplina (String nome)
    {
        nomeDisciplina = nome;
    }
    
    public String getNomeDisciplina ()
    {
        return nomeDisciplina;
    }
    
    public void mostraMensagem ()
    {
        System.out.printf("Sua disciplina é: %s", nomeDisciplina);
    }
}
