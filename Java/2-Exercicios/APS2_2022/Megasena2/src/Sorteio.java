/**
 *
 * @author Tales
 */

import java.util.Random;
import java.util.ArrayList;
import java.util.Collections;

public class Sorteio 
{
    private final Random num = new Random();
    private final ArrayList <Integer> numSorteados = new ArrayList ();
    
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
    
    public ArrayList getSorteio ()
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
    
    
}

