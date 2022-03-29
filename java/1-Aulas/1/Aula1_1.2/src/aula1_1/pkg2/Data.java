package aula1_1.pkg2;

public class Data 
{
    private int dia;
    private int mes;
    private int ano;
    
    public void setData (int d, int m ,int a)
    {
        if (d <= 31 && d > 0)
        {
            dia = d;
        }
        
        if (m <= 12 && m > 0)
        {
            mes = m;
        }
        
        
        ano = a;
    }
}
