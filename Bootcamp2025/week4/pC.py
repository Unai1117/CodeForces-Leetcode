import re

def main():
    # s = input().strip()
    # cadena = re.sub(r"\s+", "", s)
    n = int(input())
    h1 = list(map(int, input().split()))
    h2 = list(map(int, input().split()))
    res1 = [h1[i] if i % 2 == 0 else h2[i] for i in range(n)]
    res2 = [h2[i] if i % 2 == 0 else h1[i] for i in range(n)]
    print(*res1)
    print(*res2)

if __name__ == "__main__":
    main()