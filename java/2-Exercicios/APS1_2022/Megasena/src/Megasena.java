/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */

/**
 *
 * @author Tales
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
    
