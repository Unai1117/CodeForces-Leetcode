import re

def main():
    # s = input().strip()
    # cadena = re.sub(r"\s+", "", s)
    n = int(input())
    h1 = list(map(int, input().split()))
    h2 = list(map(int, input().split()))
    
    res = [h1[i] + h2[i] for i in range(n)]
    print(*res)


if __name__ == "__main__":
    main()