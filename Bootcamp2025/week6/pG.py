# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -> # s = input().strip()
                                                 # cadena = re.sub(r"\s+", "", s)
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

def punto_silla(mat, n, m):
    for i in range(n):
        row_min = mat[i][0]
        col_j = 0
        for j in range(1, m):
            if mat[i][j] < row_min:
                row_min = mat[i][j]
                col_j = j
        
        if all(mat[k][col_j] <= row_min for k in range(n)):
            return i, col_j
        
    return -1, -1


if __name__ == "__main__":
    t = inp()
    results = []
    for _ in range(t):
        n, m = invr()
        mat = [list(map(int, input().split())) for _ in range(n)]
        
        x, y = punto_silla(mat, n, m)
        results.append(f"{x} {y}")
    
    print("\n".join(results))