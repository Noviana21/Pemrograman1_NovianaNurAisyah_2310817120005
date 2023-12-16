def MaxBilangan(a, b, c, d):
    if a > b and a > c and a > d:
        hasil = a
    elif b > a and b > c and b > d:
        hasil = b
    elif c > a and c > b and c > d:
        hasil = c
    elif d > a and d > b and d > c:
        hasil = d

    return hasil

def main():
    a, b, c, d = map(int, input().split())
    hasil = MaxBilangan(a, b, c, d)
    print(hasil)

main()