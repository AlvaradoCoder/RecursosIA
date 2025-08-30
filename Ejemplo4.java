public class Ejemplo4 {
    static class Persona{
        private int idPersona;
        private String nombre;
        private String apellido;
        public Persona(){}
        public Persona(int id, String n, String a){
            this.idPersona = id;
            this.nombre = n;
            this.apellido = a;
        }
        public int getIdPersona(){
            return this.idPersona;
        }
        public String getNombre(){
            return this.nombre;
        }
        public String getApellido(){
            return this.apellido;
        }
    }
    public static void main(String[] args) {
        Persona p = new Persona(1, "Juan", "Perez");
        System.out.println(p.getNombre());

    }
}
