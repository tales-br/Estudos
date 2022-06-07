import java.util.*;
import java.io.FileInputStream;
import java.io.FileNotFoundException;

public class Aposta 
{
    private Map <String, Dezenas> listaAposta = new HashMap <String, Dezenas>();
    private String linha;
    private int maxAposta = 15;
    private int minAposta = 6;
    private int numMin = 1;
    private int numMax = 60;
    
    
    public void setAposta ()
    {
        try
        {
            FileInputStream arqApostas = new FileInputStream("apostas.txt");
            Scanner scanner = new Scanner (arqApostas);
            
             while (scanner.hasNext()) 
            {
                linha = scanner.nextLine();
                
                toMap(linha);
            }
        }
        catch (FileNotFoundException e1)
        {
            e1.printStackTrace();
            System.out.println("Arquivo apostas.txt não encontrado. Programa será abortado.");
            System.exit(-1);
        }
        
        validaQtdDezenas();
        
    }
    
    private void validaQtdDezenas ()
    {
        int contApostaDezInvalida = 0;
        
        for (Map.Entry<String, Dezenas> entry: listaAposta.entrySet())
          {
              if(entry.getValue().qtdDezenas()>maxAposta || entry.getValue().qtdDezenas()<minAposta)
              {
                contApostaDezInvalida++;
                System.out.println("Quantidade de dezenas fora do parâmetro para CPF: "+entry.getKey() + " possui "+ entry.getValue().qtdDezenas()+" dezenas");
              }
              if(contApostaDezInvalida>0)
              {
                System.out.println(contApostaDezInvalida+" registro(s) com quantidade de dezenas fora do parâmetro.\nO sistema irá abortar.");
                System.exit(-1);
              }
          }
    }
    
        private void validaNumDezenas ()
    {
        int contApostaDezInvalida = 0;
        
        for (Map.Entry<String, Dezenas> entry: listaAposta.entrySet())
          {
             for(int i = 0;i<=entry.getValue().qtdDezenas();i++)
             {
                
             }
          }
    }
    
    private void toMap (String linhaConverte)
    {
        String[] parcial = linhaConverte.split(":");
        
        listaAposta.put(parcial[0],new Dezenas(parcial[1]));
    }
    
    /*
    private ArrayList <Integer> numeros = new ArrayList<Integer>();
    private boolean valida = false;
    private final int maxAposta = 15;
    private final int minAposta = 6;
    
    public void setAposta (String strAposta)
    {
        //separa um array de string temporario para dividir a string pelo espaco ' ' [ainda não sei regex para fazer mais elaborado, e existem métodos mais enxutos de fazer isso]
        String[] parcial = strAposta.split(" ");

        for (int i = 0; i < parcial.length; i++)
        {
            //verifica se já existe o número no arraylist
            if(!this.numeros.contains(toInt(parcial[i])))
            {
                this.numeros.add(toInt(parcial[i]));                
            }

        }
        
        if (apostaValida(numeros))
        {
            Collections.sort(this.numeros);
        }
        
    }
    
    public ArrayList <Integer> getAposta ()
    {
        return this.numeros;
    }
    
 
    //verifica se a aposta excedeu o esperado ou algum valor foi flagado como ilegal dentro do arraylist
        private boolean apostaValida (ArrayList aposta)
    {
        String apostaInvalida = "###Aposta invalida!###";
        
        if(aposta.size() > maxAposta || aposta.size() < minAposta)
        {
            this.valida = false;
            return false;
        }
        else
        {
             if (aposta.contains(-1))
             {
                 this.valida = false;
                 return false;
             }
             else
             {
                 for(int i = 0; i < aposta.size(); i++)
                 {
                     // transforma/"casta" o objeto em inteiro (na marra)
                     
                     if((Integer)aposta.get(i)< 1 || (Integer)aposta.get(i)>60)
                     {
                         this.valida = false;
                         return false;
                     }
                     
                 }
             }
            
        }
        this.valida = true;
        return true;
    }
    
        
        //verifica se é inteiro
    private int toInt (String strToInt)
    {
        try
            {
                return Integer.valueOf (strToInt);                    
            }
        catch (NumberFormatException e)
            {
                return -1;
            }
    }
    
    public void limpaAposta (ArrayList aposta)
    {
        aposta.clear();
    }
    
    public void imprimeAposta ()
    {
        if (valida)
        {
            for(int i = 0; i < numeros.size(); i++)
            {
                System.out.printf("%d%s",(Integer)numeros.get(i), i != numeros.size()-1 ? " ": "");
            }
        }
        else
        {
            System.out.printf("\n\t\t Nao ha aposta valida para visualizar.\n");
        }
    }

    public boolean validadorDeAposta ()
        {
            return valida;
        }
*/
}