# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -> # s = input().strip()
                                                 # cadena = re.sub(r"\s+", "", s)
# import re

def solve(s: str) -> tuple[str, int]:
    enmarcado = []
    l_enmarcado = 1
    count = 1
    space = False
    
    for c in s:
        if c == ' ':
            enmarcado.append(" *** ")
            l_enmarcado += 5
            space = True
        else:
            if count == 1:
                count += 1
                enmarcado.append("*  ")
                enmarcado[-1] = enmarcado[-1][:-1] + c
                l_enmarcado += 4
            elif space:
                enmarcado.append(" ")
                enmarcado[-1] = c
                space = False
                l_enmarcado += 1
            else:
                enmarcado.append(" *  ")
                enmarcado[-1] = enmarcado[-1][:-1] + c
                l_enmarcado += 4
    enmarcado.append(" *")
    return ''.join(enmarcado), l_enmarcado


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input().strip()
        linea, largo = solve(s)
        borde = "*" * largo
        print(borde)
        print(linea)
        print(borde)
        