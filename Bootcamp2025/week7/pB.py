# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -> # s = input().strip()
                                                 # cadena = re.sub(r"\s+", "", s)
                                                 # s = re.sub('[^a-zA-Z0-9]', '', s).lower() !Eliminar todos los caracteres que no son alfanuméricos y convertir a minúsculas
# import re
from collections import deque

def inp(): #integer
    return(int(input()))
def inlt(): # list
    return(list(map(int,input().split())))
def insr(): # string
    s = input()
    return("".join(list(s[:len(s) - 1])))
def invr(): # separated int
    return(map(int,input().split()))


def solve():
    n = inp()  
    colas = [deque() for _ in range(3)]
    
    for i in range(3):
        linea = input().strip()
        colas[i].extend(linea.split())
        
    while True:
        try:
            linea = input().strip()
        except EOFError:
            break
        if not linea:
            break
        partes = linea.split()
        
        if not partes:
            break
        
        op = partes[0]
        if op == "MOVER":
            origen = int(partes[1])
            destino = int(partes[2])
            if colas[origen]:
                colas[destino].append(colas[origen].popleft())
        
        elif op == "AGREGAR":
            persona = partes[1]
            destino = int(partes[2])
            colas[destino].append(persona)
        
        elif op == "ATENDER":
            origen = int(partes[1])
            if colas[origen]:
                colas[origen].popleft()
    
    for q in colas:
        if q:
            print(" ".join(q) + " ")
        else:
            print("NO HAY NADIE")


if __name__ == "__main__":
    solve()