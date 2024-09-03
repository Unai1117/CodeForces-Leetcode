def encontrar_culpable(n, acusaciones):
    resultados = []
    
    for i in range(n):
        visitado = set()
        actual = i + 1
        
        while actual not in visitado:
            visitado.add(actual)
            actual = acusaciones[actual - 1]
        
        resultados.append(actual)
    
    return resultados

# Leer entrada
n = int(input())
acusaciones = list(map(int, input().split()))

# Encontrar los culpables y mostrar el resultado
resultados = encontrar_culpable(n, acusaciones)
print(" ".join(map(str, resultados)))
