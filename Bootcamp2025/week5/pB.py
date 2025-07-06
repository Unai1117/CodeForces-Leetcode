# Leer dimensiones de una matriz -> n, m = map(int, input().split())
# Leer una cadena y eliminar espacios en blanco -> s = input().strip()
# Leer una matriz desde la entrada estandar -> mat = [list(input().strip()) for _ in range(n)] 
# (siendo n el número de filas)
# Leer cadena eliminando espaciones en blanco -> # s = input().strip()
                                                 # cadena = re.sub(r"\s+", "", s)
# import re

def main():
    n = int(input().strip())
    arr = list(map(int, input().strip().split()))
    arr.sort()
    t = int(input().strip())
    while t > 0:
        t -= 1
        goal = int(input().strip())
        res = solve(goal, arr, 0, n - 1)
        if res:
            print("YES")
        else:
            print("NO")
        
def solve(goal, arr, l, r) -> bool:
    while l <= r:
        mid = (l + r) // 2
        if arr[mid] == goal:
            return True
        elif arr[mid] < goal:
            l = mid + 1
        else:
            r = mid - 1
    return False



if __name__ == "__main__":
    main()