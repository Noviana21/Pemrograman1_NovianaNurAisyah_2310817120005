def maksimal(a, b):
    x = a
    if b > a:
        x = b
    return x

def minimal(a, b):
    y = a
    if b < a:
        y = b
    return y

def main():
    batas = 0
    maks = -100000
    minim = 100000
    bilangan = int(input())
    nilai = list(map(int, input().split()))

    for i in range(batas, bilangan):
        maks = maksimal(maks, nilai[i])
        minim = minimal(minim, nilai[i])

    print(f"{maks} {minim}")

main()