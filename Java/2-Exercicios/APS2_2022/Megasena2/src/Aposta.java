import java.util.*;
import java.io.*;

public class Aposta 
{
    private final Map <String, Dezenas> listaAposta = new HashMap <>();
    private String linha;
    private final int maxAposta = 15;
    private final int minAposta = 6;
    private final int numMax = 60;
    private final int numMin = 1;
    Sorteio sorteio = new Sorteio(); //Cria um objeto do tipo sorteio para instanciar no construtor
    
    public void setAposta ()
    {
        sorteio.setSorteio();
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
            System.out.println("Arquivo apostas.txt não encontrado. Programa será abortado.");
            System.exit(-1);
        }
        
        validaDezenas();
        
    }
    
    //Verifica se há uma quantidade de dezenas diferente do permitido. Caso exista, lista os registros fora do parâmetro e sai da aplicação.
    private void validaDezenas ()
    {
        int contApostaDezInvalida = 0;
        int contApostaNumDezInvalida = 0;
        
        for (Map.Entry<String, Dezenas> entry: listaAposta.entrySet())
          {
              //Verifica a quantidade de dezenas da aposta corrente.
              if(entry.getValue().qtdDezenas()>maxAposta || entry.getValue().qtdDezenas()<minAposta)
              {
                contApostaDezInvalida++;
                System.out.println("\nQuantidade de dezenas fora do parâmetro para CPF: "+entry.getKey() + " possui "+ entry.getValue().qtdDezenas()+" dezenas");
              }

              
              //Verifica o valor de cada dezena da aposta corrente
              for(int i = 0; i<entry.getValue().qtdDezenas();i++)
              {
                  //1- verifica se já tem aquele número 2-verifica se está dentro da range dos números mins e máx
                if(entry.getValue().dezenaRepetida(entry.getValue().retornaNumero(i)) || entry.getValue().retornaNumero(i)>numMax || entry.getValue().retornaNumero(i)<numMin)
                {
                  if(contApostaNumDezInvalida==0) System.out.println("\nDezena(s) fora do parâmetro ou repetida para CPF: "+entry.getKey());

                  System.out.print("["+ entry.getValue().retornaNumero(i)+"]");

                  contApostaNumDezInvalida++;
                }
              }
              

          }
        
        if(contApostaDezInvalida>0 || contApostaNumDezInvalida>0)
        {
            if(contApostaDezInvalida>0)
            {
                System.out.println("\n\t"+contApostaDezInvalida+" registro(s) com quantidade de dezenas fora do parâmetro.");
            }
            
            if(contApostaNumDezInvalida!=0)
            {
                System.out.println("\n\tTotal de registros fora do parâmtro: "+contApostaNumDezInvalida);
            }            
            
            System.out.println("\n\tO sistema irá abortar.");
            System.exit(-1);            
        }
    }
    
    //Verifica se o CPF já está constando nas chaves registradas. Sai do programa em caso positivo.
    private void validaCpf (String cpf)
    {
        if(listaAposta.containsKey(cpf))
        {
            System.out.println("CPF "+cpf+" duplicado.\nSistema irá abortar a execução.");
            System.exit(-1);
        }
    }
    
    //Chama o procedimento que verifica se a chave está duplicadae. Inclui registros no map. 
    private void toMap (String linhaConverte)
    {
        String[] parcial = linhaConverte.split(":");
        
        validaCpf(parcial[0]);
        
        listaAposta.put(parcial[0],new Dezenas(parcial[1]));
    }
    
    public void consultaCpf (String cpf)
    {
        if(listaAposta.containsKey(cpf))
        {
            Jogo jogo = new Jogo(listaAposta.get(cpf).dezenas(),sorteio.getSorteio());
            jogo.imprimeJogoAposta();
            jogo.imprimeResultado();
        }
        else
        {
            System.out.println("Você não fez aposta neste concurso.");
        }
            
    }
    
    public ArrayList listaDezenas (String cpf)
    {
        return listaAposta.get(cpf).dezenas();
    }
    
}