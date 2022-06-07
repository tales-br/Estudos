/**
 *  @Turma: 142 - PROGRAMAÇÃO ORIENTADA A OBJETO 2022/1 
 *  @autores: 
 *  Nome completo 1:    Anna Carla Souza    -   2018101222
 *  Nome completo 2:    Luiz Sergio Venancio da Costa Netto -   2019100245
 *  Nome completo 3:    Tales Barbosa Rodrigues -   2017102056
 *  Nome completo 4:    Wellington alves da silva   -   2020101708
 *  Nome completo 5:    Willian Antonio de Assunção -    2018101605
 */

import java.util.Scanner;

public class Megasena2 
{
    
    
    public static void main(String[] args)
    {
        String numCpf;
        
        Scanner entrada = new Scanner(System.in);
        
        Aposta aposta = new Aposta();
        aposta.setAposta();
        Sorteio sorteio = new Sorteio();
        
        System.out.println("Entre com o seu CPF: ");
        numCpf = entrada.nextLine();
        
        if(aposta.consultaCpf(numCpf))
        {
            System.out.println("Você apostou "+aposta.);
        }
        else
        {
            
        }
        
        //Jogo jogo = new Jogo();
        
        
        
        
    }
}
    
