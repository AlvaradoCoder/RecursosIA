#import numpy as np

def Cambiar(lst : list)->None:
    lst[0] = 20

def Cambiar2(dato : int)->None:
    dato = 20


#Instancia de la clase list (mutable)
x = [1,2]
#Cambiar(x)
Cambiar2(x[0])
#print(x[3])
#print(x[0])
