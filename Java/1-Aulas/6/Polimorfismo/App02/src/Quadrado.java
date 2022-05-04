
public class Quadrado extends Forma2D
{
    private double lado;
    
    public Quadrado (double x, double y, double l)
    {
        super (x, y);
        lado = l;
    }

    @Override
    public void nome ()
    {
        System.out.println("Quadrado");
    }
    
    @Override
    public double area()
    {
        return lado*lado;
    }
}
