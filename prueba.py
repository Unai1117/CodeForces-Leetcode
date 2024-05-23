def decode_string(encoded):
    distinct_chars = sorted(set(encoded))
    r = ''.join(distinct_chars[::-1])
    
    
    decoded = ''
    for char in encoded:
        index = r.index(char)
        decoded += distinct_chars[index]
    
    return decoded


t = int(input())


for _ in range(t):
    
    n = int(input())
    encoded_string = input()
    

    print(decode_string(encoded_string))
