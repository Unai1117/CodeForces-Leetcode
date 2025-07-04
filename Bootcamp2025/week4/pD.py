# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)

import sys

def main():
    # s = input().strip()
    # cadena = re.sub(r"\s+", "", s)
    n, m = map(int, input().split())
    mat = [list(input().strip()) for _ in range(n)]
    gotas = [[cell == '#' for cell in row] for row in mat]
    
    for i in range(n):
        for j in range(m):
            if gotas[i][j]:
                for k in range(m):
                    mat[i][k] = '#'
                for k in range(n):
                    mat[k][j] = '#'
    
    for row in mat:
        print(''.join(row))


if __name__ == "__main__":
    main()