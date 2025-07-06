# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -> # s = input().strip()
                                                 # cadena = re.sub(r"\s+", "", s)
# import re


def solve():
    n = int(input())
    granos = []
    
    for _ in range(n): 
        calidad, etiqueta = input().strip().split()
        granos.append((int(calidad), etiqueta))
        
    granos.sort(key=lambda x: (x[0], x[1]))
    
    for calidad, etiqueta in granos:
        print(calidad, etiqueta)

if __name__ == "__main__":
    solve()