# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -> # s = input().strip()
                                                 # cadena = re.sub(r"\s+", "", s)
# import re

def solve():
    n,m = map(int, input().split())
    mat = [list(input().strip()) for _ in range(n)]
    dirs = [(-1,-1), (-1, 0), (-1, 1), 
            (0, -1),           (0, 1), 
            (1, -1), (1, 0),  (1, 1)]
    
    solved = [[''] * m for _ in range(n)]
    for i in range(n):
        for j in range(m):
            if mat[i][j] == '*':
                solved[i][j] = 'F'
            else:
                mines = 0
                for di, dj in dirs:
                    ni, nj = i + di, j + dj
                    if 0 <= ni < n and 0 <= nj < m and mat[ni][nj] == '*':
                        mines += 1
                solved[i][j] = ' ' if mines == 0 else str(mines)
                
    for row in solved:
        print(''.join(row))

if __name__ == "__main__":
    solve()