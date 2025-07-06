# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -> # s = input().strip()
                                                 # cadena = re.sub(r"\s+", "", s)
# import re
from collections import deque
DX = (-1, 1, 0, 0)
DY = (0, 0, -1, 1)

def inp(): #integer
    return(int(input()))
def inlt(): # list
    return(list(map(int,input().split())))
def insr(): # string
    s = input()
    return("".join(list(s[:len(s) - 1])))
def invr(): # separated int
    return(map(int,input().split()))


def solve(grid: list[str], n: int, sx: int, sy: int) -> int:
    dist = [[-1] * n for _ in range(n)]
    q = deque([(sx, sy)])
    dist[sx][sy] = 0
    
    while q:
        x, y = q.popleft()
        
        for k in range(4):
            nx, ny = x + DX[k], y + DY[k]
            
            if 0 <= nx < n and 0 <= ny < n:
                if grid[nx][ny] == 'C':
                    return dist[x][y] + 1
                
                if grid[nx][ny] == '0' and dist[nx][ny] == -1:
                    dist[nx][ny] = dist[x][y] + 1
                    q.append((nx, ny))
                    
    return -1  

def main():
    n = inp()
    grid: list[str] = []
    sx = sy = -1
    
    for i in range(n):
        row = input().strip()
        grid.append(row)
        for j, ch in enumerate(row):
            if ch == 'R':
                sx, sy = i, j
                
    print(solve(grid, n, sx, sy))

if __name__ == "__main__":
    main()