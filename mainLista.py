class Nodo:
    def __init__(self, v : int):
        self.Valor = v
        self.Siguiente = None
    
class Lista:
    def __init__(self):
        self.__Primero = None
        self.__Ultimo = None
    
    def ListaVacia(self):
        return self.__Primero == None
    def Insertar(self, v:int)->None:
        nuevo = Nodo(v)
        if self.ListaVacia():
            self.__Primero = nuevo
        else:
            self.__Ultimo.Siguiente = nuevo
        self.__Ultimo = nuevo
    def Mostrar(self)->None:
        tmp = self.__Primero
        resultado = ""
        while (tmp != None):
            resultado += str(tmp.Valor) + "-->"
            tmp = tmp.Siguiente
        resultado += "NULL"
        print(resultado)

lst = Lista()
lst.Insertar(12)
lst.Insertar(99)
lst.Insertar(5)
lst.Mostrar()