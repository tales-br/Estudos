/**
 *
 * @author Tales
 */

//Não sei se era um requisito obrigatório usar array 'E' ArrayList no programa

import java.util.ArrayList;

public class Jogo 
{
    private ArrayList <Integer> jogoAposta;
    private ArrayList <Integer> jogoSorteio;
    final private double [] tabValores = {4.5, 31.5, 126.0, 378.0, 945.0, 2079.0, 4158.0, 7722.0, 13513.5, 22522.5};
    int [] tabAcertos = new int [6];
    private boolean processar = false;
    private int hits = 0;
    
    
    //construtor    
    public Jogo(ArrayList <Integer> aposta, ArrayList <Integer> sorteio, boolean apostaEhValida)
    {
        this.jogoAposta = aposta;
        this.jogoSorteio = sorteio;
        this.processar = apostaEhValida;
    }
    
    public int acertos ()
    {
        this.hits = 0;
        int j = 0;
        
        if(processar)
        {
            for(int i = 0; i < jogoAposta.size(); i++)
            {
                if(jogoSorteio.contains(jogoAposta.get(i)))
                {
                    this.tabAcertos[j] = jogoAposta.get(i);
                    j++;
                    this.hits++;
                }
            }
        }
        else
        {
            this.hits = 0;
        }
        
        return this.hits;
    }
    
    public void imprimeResultado ()
    {    
        acertos();
        if(processar)
        {

            System.out.printf("\t\t\n-------------------------------------------------\nR E S U L T A D O D A M E G A S E N A\n-------------------------------------------------\n\n");
            System.out.printf("Dezenas sorteadas: ");
            //mostra as dezenas sorteadas (coloca um espaço entre elas)
            for (int i = 0; i<6; i++)
            {
                System.out.printf("%s%s",jogoSorteio.get(i)<10 ? "0"+Integer.toString(jogoSorteio.get(i)):Integer.toString(jogoSorteio.get(i)), i != jogoSorteio.size()-1 ? " ": "");
            }


              
            if(hits == 0)
            {
                System.out.printf("\nVocê acertou nenhuma dezena. "); 
                System.out.printf("\n\n-------------------------------------------------");
            }
            else
            {
                System.out.printf("\nVocê acertou %d dezena(s): ",hits);
                
                for(int i = 0; i <hits; i++)
                {
                    //mostra as dezenas acertadas (coloca uma ',' ou um 'e' entre elas)
                    if(i == hits-1)
                    {
                        
                        System.out.printf("%s%s.",hits == 1 ? "": " e ",tabAcertos[i]<10 ? "0"+Integer.toString(tabAcertos[i]):Integer.toString(tabAcertos[i]));
                    }
                    else
                    {
                        System.out.printf("%s%s",tabAcertos[i]<10 ? "0"+Integer.toString(tabAcertos[i]):Integer.toString(tabAcertos[i]), i == hits-2 ? "": ", ");
                    }
                }
                System.out.printf("\n\n-------------------------------------------------");
            }
            
        }
        else
        {
            System.out.printf("\nNão é possível mostrar resultado!");
        }
    }
    
    public void imprimeJogoAposta ()
    {
        if(processar)
        {
            //a quantidade de apostas -6 indica em qual posicao do vetor está o valor total a pagar pela aposta
            int indexValor = jogoAposta.size() - 6;

            System.out.printf("\n\tAposta: %d dezenas", jogoAposta.size());
            System.out.printf("\n\tDezenas: ");

            for(int i =0; i<jogoAposta.size();i++)
            {
                System.out.printf("%s ",jogoAposta.get(i)<10 ? "0"+Integer.toString(jogoAposta.get(i)):Integer.toString(jogoAposta.get(i)));
            }
            
            System.out.printf("\n\tValor: R$ %.2f", tabValores[indexValor]);
        }
        else
        {
            System.out.printf("\nNão é possível mostrar aposta!");
        }
        
        
    }
    
}
