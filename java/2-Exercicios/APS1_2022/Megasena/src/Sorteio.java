/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Tales
 */

import java.util.Random;
import java.util.ArrayList;
import java.util.Collections;

public class Sorteio 
{
    private Random num = new Random();
    private ArrayList <Integer> numSorteados = new ArrayList ();
    
    //Sorteia os números. Caso o número seja igual a algum valor no array, ele sorteará novamente
    public void setSorteio ()
    {
        int aux;
        for(int i = 1; i <= 6; i++)
        {
            aux = num.nextInt(60) + 1;
            if(this.numSorteados.contains(aux))
            {
                i--;
            }
            else
            {
              this.numSorteados.add(aux);
            }

        }
        Collections.sort(this.numSorteados);
    }
    
    public ArrayList <Integer> getSorteio ()
    {
        return this.numSorteados;
    }
    
    private void limpaSorteio ()
    {

            this.numSorteados.clear();

    }
    
    public void newSorteio ()
    {
        limpaSorteio();
        setSorteio();
    }
    
    public void imprimeSorteio ()
    {
         System.out.printf("\nNumeros sorteados:\n");
            for(int i = 0; i < numSorteados.size(); i++)
            {
                System.out.printf("%d%s",numSorteados.get(i), i != numSorteados.size()-1 ? " ": "");
            }
    }
    
}

