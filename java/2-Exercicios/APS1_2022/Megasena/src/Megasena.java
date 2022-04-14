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

public class Megasena 
{
    
    
    public static void main(String[] args)
    {
        String apostaDoUsuario;
        
        Aposta aposta = new Aposta();
        Sorteio sorteio = new Sorteio();
        
        
        
        Scanner input = new Scanner(System.in);
        
        System.out.printf("Insira os valores da aposta: ");
        apostaDoUsuario = input.nextLine();
        
        aposta.setAposta (apostaDoUsuario);
        sorteio.setSorteio();
        
        //pensei depois só mais tarde, quando já tinha feito o código....podia ter colocado aqui por composição!!!
        Jogo jogo1 = new Jogo (aposta.getAposta(), sorteio.getSorteio(),aposta.validadorDeAposta());
        
        jogo1.imprimeJogoAposta();
        jogo1.imprimeResultado();
        

    }
}
    
