/*
PRIMEIRO EXERCÍCIO SLIDE_1 - Unicarioca

Escreva um programa em Java que solicite ao usuário
dois números inteiros e verifique se os mesmos são
múltiplos entre si.
 */

package aula_1;

import java.util.Scanner; //importa pacote

public class Aula_1
{

    public static void main(String[] args)
    {
        int num1;
        int num2;
        
        Scanner input = new Scanner (System.in); //pega objeto da classe Scanner
        
        System.out.print("Digite o primeiro inteiro: ");
        num1 = input.nextInt();
        
        System.out.print("Digite o segundo inteiro: ");
        num2 = input.nextInt();
    
        if( ((num1 % num2) == 0) || ((num2 % num1) == 0) )
        {
            System.out.printf("%d e %d são múltiplos entre si!", num1, num2);
        }
        else
        {
            System.out.printf("%d e %d não são múltiplos entre si!", num1, num2);
        }
        
    }
    
}
