public class Ejemplo2{
    private static void Cambiar(int arreglo[]){
        arreglo[0] = 20;
    }
    public static void main(String args[]){
        int x[] = {1,2};
        Cambiar(x);
        System.out.println(x[0]);        
    }
}