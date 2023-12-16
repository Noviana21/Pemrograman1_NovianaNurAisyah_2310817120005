def mutlak(angka):
    if angka < 0:
        angka = -angka
    return angka

def hitung(nilai1, nilai2):
    hasil = nilai1 - nilai2
    return mutlak(hasil)

def main():
    a, c, b, d = map(int, input().split())
    hasil = hitung(a, b) + hitung(c, d)
    print(mutlak(hasil))

main()