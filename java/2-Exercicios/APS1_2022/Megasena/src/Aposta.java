/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

import java.util.ArrayList;
import java.util.Collections;

/**
 *
 * @author Tales
 */

//Alguns métodos que não foram explicitamente usados na funcao main, foram criados para meu controle (afim de ir vento como andava o processo de construção da classe)

public class Aposta 
{
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
            
            //System.out.printf("\n\tAposta realizada!");
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
            //System.out.printf("\n%s",apostaInvalida);
            //System.out.printf("\nQuantidade total de numeros apostados, difere do permitido.\n\tMaximo Permitido: %d\n\tMinimo Permitido: %d\n\tApostados: %d",maxAposta,minAposta, aposta.size());
            this.valida = false;
            return false;
        }
        else
        {
             if (aposta.contains(-1))
             {
                 //System.out.printf("\n%s",apostaInvalida);
                 //System.out.printf("\nUm ou mais argumentos invalidos!");
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
                         //System.out.printf("\n%s",apostaInvalida);
                         //System.out.printf("\nUm ou mais argumentos invalidos! Número(s) digitado(s) fora do esperado entre 01 e 60.");
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
}