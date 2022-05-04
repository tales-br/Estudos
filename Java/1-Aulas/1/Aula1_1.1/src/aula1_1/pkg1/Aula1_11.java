/*
Crie um aplicativo “Calculadora IMC” que leia o peso do usuário em
quilogramas e a altura em metros e, então, calcule e exiba o índice de
massa corporal dele. Onde:
        𝐼𝑀𝐶 = 𝑝𝑒𝑠𝑜 / 𝑎𝑙𝑡𝑢𝑟𝑎²

• Além disso, que exiba as seguintes informações do Department of Health
and Human Services/National Institutes of Health, assim o usuário pode
avaliar o seu IMC:
        • Abaixo do peso: IMC < 18.5
        • Normal: 18.5 ≤ IMC ≤ 24.9
        • Sobrepeso: 25 ≤ IMC ≤ 29.9
        • Obeso: IMC ≥ 30
*/
package aula1_1.pkg1;

import java.util.Scanner;
        
public class Aula1_11 
{

    public static void main(String[] args) 
    {
        Scanner input = new Scanner (System.in);
        
        double altura, peso, IMC;
         
        
        System.out.print("Por favor inclua sua altura: ");
        altura = input.nextFloat();
        
        System.out.print("Por favor inclua seu peso: ");
        peso = input.nextFloat();
        
        altura = Math.pow(altura,2);
        
        IMC = peso / altura;
        
        if(IMC < 18.5)
        {
            System.out.printf("Seu IMC é [%.2f] - Abaixo do peso: IMC < 18.5",IMC);
        }
        else
        {
            if(IMC >= 18.5 && IMC <=24.9)
            {
                System.out.printf("Seu IMC é [%.2f] - Normal: 18.5 ≤ IMC ≤ 24.9",IMC);
            }
            else
            {
                if(IMC >= 25 && IMC <=29.9)
                {
                    System.out.printf("Seu IMC é [%.2f] - Sobrepeso: 25 ≤ IMC ≤ 29.9",IMC);
                }
                else
                {
                    System.out.printf("Seu IMC é [%.2f] - Obeso: IMC ≥ 30",IMC);
                }
            }
        }
    }
    
}
