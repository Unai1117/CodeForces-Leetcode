# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -># s = input().strip()
                                                # cadena = re.sub(r"\s+", "", s)
                                                # s = re.sub('[^a-zA-Z0-9]', '', s).lower() !Eliminar todos los caracteres que no son alfanuméricos y convertir a minúsculas
# import re


def inp(): #integer
    return(int(input()))
def inlt(): # list
    return(list(map(int,input().split())))
def insr(): # string
    s = input()
    return("".join(list(s[:len(s) - 1])))
def invr(): # separated int
    return(map(int,input().split()))


def solve(n: int, edges: list[tuple[int, int]]) -> None:
    adj = [[False] * (n + 1) for _ in range(n + 1)]
    
    for u, v in edges:
        adj[v][u] = adj[u][v] = True
    
    missing = []
    for i in range(1, n + 1):
        for j in range(i + 1, n + 1):
            if not adj[i][j]:
                missing.append((i, j))
                
    print(len(missing))
    
    for u, v in missing:
        print(u, v)
    


if __name__ == "__main__":
    n, m = map(int, input().split())
    
    edges = [tuple(map(int, input().split())) for _ in range(m)]
    solve(n, edges)