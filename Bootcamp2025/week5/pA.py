# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -> # s = input().strip()
                                                 # cadena = re.sub(r"\s+", "", s)
# import re

def solve():
    n = int(input().strip())
    arr = list(map(int, input().strip().split()))
    arr.sort()
    best = int(1e9)
    for i in range(n - 1):
        best = min(best, arr[i + 1] - arr[i])
    print(best)


if __name__ == "__main__":
    solve()