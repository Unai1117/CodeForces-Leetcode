# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -># s = input().strip()
                                                # cadena = re.sub(r"\s+", "", s)
                                                # s = re.sub('[^a-zA-Z0-9]', '', s).lower() !Eliminar todos los caracteres que no son alfanuméricos y convertir a minúsculas
# import re
import heapq

INF = int(1e18)

def inp(): #integer
    return(int(input()))
def inlt(): # list
    return(list(map(int,input().split())))
def insr(): # string
    s = input()
    return("".join(list(s[:len(s) - 1])))
def invr(): # separated int
    return(map(int,input().split()))


def dijkstra(n: int, s: int, adj: list[list[tuple[int, int]]]):
    dist = [INF] * n
    parent = [-1] * n
    dist[s] = 0
    pq = [(0, s)]  # (distance, node)
    
    while pq:
        d, u = heapq.heappop(pq)
        if d != dist[u]:
            continue
        
        for v, w in adj[u]:
            nd = d + w
            if nd < dist[v]:
                dist[v] = nd
                parent[v] = u
                heapq.heappush(pq, (nd, v))
    
    return dist, parent

if __name__ == "__main__":
    t = inp()
    for _ in range(t):
        n, s = map(int, input().split())
        
        adj = [[] for _ in range(n)]
        for u in range(n):
            datos = list(map(int, input().split()))
            g = datos[0]
            for j in range(g):
                v = datos[1 + 2 * j]
                w = datos[1 + 2 * j + 1]
                adj[u].append((v, w))
        
        dist, parent = dijkstra(n, s, adj)
        for i in range(n):
            if i == s or dist[i] == INF:
                continue
            
            print(f"{i}:")
            print(f"riesgo {dist[i]}")
            
            path = []
            cur = parent[i]
            while cur != -1:
                path.append(str(cur))
                cur = parent[cur]
            
            print(" <- ".join(path) if path else "")