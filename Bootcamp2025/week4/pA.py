import re

def main():
    s = input().strip()
    cadena = re.sub(r"\s+", "", s)
    voc = 0
    count = 0
    for c in cadena:
        if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'):
            voc += 1
        count += 1
    print(voc, count)
    

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()