public abstract class Forma2D 
{
    private double cx;
    private double cy;
    
    //construtor
    public Forma2D (double x, double y)
    {
        cx = x;
        cy = y;
    }
    
    public abstract double area();
    public abstract void nome();
    
}
