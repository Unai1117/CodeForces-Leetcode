N = int(input())

stack = []

for _ in range(N): 
    s = input()
    if s.startswith("Depositan"):
        book = s.replace("Depositan ", "")
        stack.append(book)
    elif s == "Retiran" and stack:
        stack.pop()
        
if stack: 
    for book in reversed(stack):
        print(book)
else:
    print("No quedan libros")
        