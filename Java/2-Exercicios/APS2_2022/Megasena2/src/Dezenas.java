import java.util.*;

public class Dezenas
{
    private ArrayList <Integer> numeros = new ArrayList<Integer>();
    private String mensagemAlerta= "Dezena(s) apostada(s) inválida(s)!";
    
    public Dezenas(String aposta)
    {
        String[] parcialDezenas = aposta.split(" ");
        
        String tempString;
        
        for (int i = 0; i < parcialDezenas.length; i++)
        {
            tempString = parcialDezenas[i];
            if(!parcialDezenas[i].isEmpty())
            {
                
                try
                { 
                    //tempInt = Integer.parseInt(tempString);

                    this.numeros.add(Integer.parseInt(tempString));
                }
                catch (InputMismatchException inputMismatchException)
                {
                    System.out.println(mensagemAlerta+" 1");
                    System.exit(-1);
                }
                catch(NumberFormatException numberFormatException)
                {
                    numberFormatException.printStackTrace();
                    System.out.println(mensagemAlerta+" 2");
                    System.exit(-1);
                }

            }
            
        }
        this.numeros.sort(null); //se tiver null vai do maior para o menor
    }
    
    public int qtdDezenas()
    {
        return this.numeros.size();
    }
    
    public Integer retornaNumero(int posicao)
    {
        return this.numeros.get(posicao);
    }
}
