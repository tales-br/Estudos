/*
Experiência para o uso de Construtores
*/

package aula1_1.pkg3;

public class Aula1_13
{

    public static void main(String[] args)
    {
        Boletim meuBoletim = new Boletim("Matemática Discreta");
        
        meuBoletim.mostraMensagem();
        
        meuBoletim.setNomeDisciplina("Java OO");
        meuBoletim.mostraMensagem();
    }

}