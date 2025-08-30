public class Nodo{
    private int Valor;
    private Nodo Siguiente;
    public Nodo(int v){
        this.Valor = v;
        this.Siguiente = null;
    }
    public void setValor(int v){
        this.Valor = v;
    }
    public int getValor(){
        return this.Valor;
    }
    public void setSiguiente(Nodo sig){
        this.Siguiente = sig;
    }
    public Nodo getSiguiente(){
        return this.Siguiente;
    }
}