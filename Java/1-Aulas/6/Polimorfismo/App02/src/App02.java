public class App02 {

    public static void mostraForma (Forma2D fig)
    {
        System.out.println ("===============" );
        System.out.print ("Forma: ");
        fig.nome ();
        System.out.println ("Área: " + fig.area());
    }
    
    
    



    
    
    
    public static void main(String[] args) 
    {
        Circulo circ = new Circulo (1,1,2);
        Quadrado quad = new Quadrado (2,2,3);
        
        Forma2D figuras[] = new Forma2D[2];
        
        figuras[0] = circ;
        figuras[1] = new Quadrado (4, 4, 5);
        
        for (Forma2D fig: figuras)
        mostraForma (fig);
        

        
    }
    
}
