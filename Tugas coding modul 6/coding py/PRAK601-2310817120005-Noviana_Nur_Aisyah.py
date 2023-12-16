def matriks(baris, kolom, m):
    for i in range(baris):
        for j in range(kolom):
            print(m[i][j], end=" ")
        print()

baris, kolom = map(int, input().split())  

m = []
for _ in range(baris):
    m.append([0] * kolom)

input_aja = list(map(int, input().split()))

matrix = 0
for i in range(baris):
    for j in range(kolom):
        m[i][j] = input_aja[matrix]
        matrix += 1

print()
matriks(baris, kolom, m)