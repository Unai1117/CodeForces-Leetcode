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


def solve(n: int, p:list[int]) -> list[int]:
    res = [0] * n
    
    for i in range(n):
        visited = set()
        current = i + 1
        
        while current not in visited:
            visited.add(current)
            current = p[current - 1]
            
        res[i] = current
    return res


if __name__ == "__main__":
    n = inp()
    p = list(map(int, input().split()))
    res = solve(n, p)
    print(*res)