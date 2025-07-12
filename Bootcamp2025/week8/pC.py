# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -># s = input().strip()
                                                # cadena = re.sub(r"\s+", "", s)
                                                # s = re.sub('[^a-zA-Z0-9]', '', s).lower() !Eliminar todos los caracteres que no son alfanuméricos y convertir a minúsculas
# import re
import sys

def inp(): #integer
    return(int(input()))
def inlt(): # list
    return(list(map(int,input().split())))
def insr(): # string
    s = input()
    return("".join(list(s[:len(s) - 1])))
def invr(): # separated int
    return(map(int,input().split()))

def find(parent, x):
    if parent[x] != x:
        parent[x] = find(parent, parent[x])
    return parent[x]


def union(parent, rank, a, b):
    ra, rb = find(parent, a), find(parent, b)
    if ra == rb:
        return False
    if rank[ra] < rank[rb]:
        parent[ra] = rb
    elif rank[ra] > rank[rb]:
        parent[rb] = ra
    else:
        parent[rb] = ra
        rank[ra] += 1
    return True

if __name__ == "__main__":
    n = int(input().strip())
    
    parent = list(range(n + 1))
    rank = [0] * (n + 1)
    
    for line in sys.stdin:
        parts = line.split()
        a, b = map(int, parts[1:3])
        
        if union(parent, rank, a, b):
            print("SI")
            sys.stdout.flush()
        else:
            print("NO")
            sys.stdout.flush()
            break