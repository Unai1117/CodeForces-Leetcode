def main(): 
    entrada = input().strip()
    A, T, N = map(int, entrada.split())
    if N != 0:
        print(A * 5 +  T * 7 + (N-1)*13 )
    elif N == 0 and T != 0:
        print(A * 5 +  (T-1) * 7)
    elif N == 0 and T == 0 and A != 0:
        print((A-1)* 5)
    else: 
        print(0)

if __name__ == "__main__":
    main()