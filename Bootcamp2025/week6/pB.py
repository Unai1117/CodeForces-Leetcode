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


def solve(t) -> int:
    arr = [1, 1]
    for i in range(2, t + 1):
        arr.append(arr[i - 1] + arr[i - 2])
    return arr[t-1]    
    
if __name__ == "__main__":
    t = inp()
    res = solve(t)
    print(res)