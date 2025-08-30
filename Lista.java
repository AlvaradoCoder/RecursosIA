public class Lista {
    private Nodo Primero;
    private Nodo Ultimo;
    public Lista(){
        this.Primero = null;
        this.Ultimo = null;
    }
    public void Insertar(int v){
        Nodo nuevo = new Nodo(v);
        if (this.ListaVacia()){
            this.Primero = nuevo;
        }
        else{
            this.Ultimo.setSiguiente(nuevo);
        }
        this.Ultimo = nuevo;
    }
    public void Mostrar(){
        Nodo tmp = this.Primero;
        while (tmp !=null){
            System.out.print(tmp.getValor() + "-->");
            tmp = tmp.getSiguiente();
        }
        System.out.print("NULL");
    }
    private boolean ListaVacia(){
        return (this.Primero==null);
    }
}
