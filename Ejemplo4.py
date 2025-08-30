class Persona:
    def __init__(self, id, nom, ape):
        self.__idPersona = id
        self.__nombre = nom
        self.__apellido = ape

    def getIdPersona(self):
        return self.__idPersona
    def getNombre(self):
        return self.__nombre
    def getApellido(self):
        return self.__apellido
    
ob = Persona(1, "Juan", "Perez")
print(type(ob))