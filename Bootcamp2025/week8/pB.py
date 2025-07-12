# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -># s = input().strip()
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


def solve(n: int, X: int, Y: int, edges: list[tuple[int, int]]) -> list[int]:
    adj = [[] for _ in range(n + 1)] # adjacency list
    for a, b in edges:
        adj[a].append(b)
        adj[b].append(a)
        
    dist = [-1] * (n + 1) # si -1 no se ha visitado
    parent = [-1] * (n + 1) # parent array
    
    # BFS
    q = deque([X])
    dist[X] = 0
    while q and dist[Y] == -1:
        node = q.popleft()
        for nei in adj[node]:
            if dist[nei] == -1:
                dist[nei] = dist[node] + 1
                parent[nei] = node
                q.append(nei)
                if nei == Y:
                    break
    
    path = []
    cur = Y
    while cur != -1:
        path.append(cur)
        cur = parent[cur]
    path.reverse()
    return path 


if __name__ == "__main__":
    n, m, X, Y = map(int, input().split())
    edges = [tuple(map(int, input().split())) for _ in range(m)]
    path = solve(n, X, Y, edges)
    
    print(len(path) - 1)
    print(*path)