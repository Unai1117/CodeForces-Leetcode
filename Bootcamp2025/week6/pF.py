# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -> # s = input().strip()
                                                 # cadena = re.sub(r"\s+", "", s)
# import re
import sys

sys.setrecursionlimit(10**6)
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

def dfs(x, y) -> int:
    if (x, y) == (endy, endx):
        return 1
    
    maze[x][y] = '#'

    for k in range(4):
        nx, ny = x + DX[k], y + DY[k]
        
        if 0 <= nx < H and 0 <= ny < W and maze[nx][ny] in ('.', 'S'):
            res = dfs(nx, ny)
            if res:
                return res + 1
    return 0

if __name__ == "__main__":
    W, H = invr()
    maze = [list(input().strip()) for _ in range(H)]
    
    startx = starty = endx = endy = -1
    for i in range(H):
        for j in range(W):
            if maze[i][j] == 'E':
                startx, starty = i, j
            elif maze[i][j] == 'S':
                endx, endy = i, j
                
    res = dfs(startx, starty)
    print(res)