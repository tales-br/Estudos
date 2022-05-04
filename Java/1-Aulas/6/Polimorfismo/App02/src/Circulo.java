/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Tales
 */
public class Circulo extends Forma2D 
{
    protected static final double PI = 3.1415;
    private double raio;
    
    public Circulo (double x, double y, double r)
    {
        super (x, y);
        raio = r;
    }
    
    @Override
    public void nome ()
    {
        System.out.println("Círculo");
    }
    
    @Override
    public double area()
    {
        return PI*raio*raio;
    }
}