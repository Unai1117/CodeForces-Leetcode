# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -> # s = input().strip()
                                                 # cadena = re.sub(r"\s+", "", s)
                                                 # s = re.sub('[^a-zA-Z0-9]', '', s).lower() !Eliminar todos los caracteres que no son alfanuméricos y convertir a minúsculas
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


def solve():
    n = inp()
    l = inlt()
    m = {}
    res = 0
    max = 0
    for i in range(n):
        id = l[i]
        if id not in m:
            m[id] = 1
        m[id] += 1
        if m[id] > max:
            max = m[id]
            res = id
        elif m[id] == max and id < res:
            res = id
    print(res)
    


if __name__ == "__main__":
    solve()