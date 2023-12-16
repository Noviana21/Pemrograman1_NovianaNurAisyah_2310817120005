def matriks(baris, kolom, m):
    for i in range(1, baris + 1):
        for j in range(1, kolom + 1):
            print(m[i][j], end=" ")
        print()


baris, kolom = map(int, input().split())  

m = [[0] * (kolom + 1) for _ in range(baris + 1)]

for i in range(1, baris + 1):
    row = list(map(int, input().split()))
    for j in range(1, kolom + 1):
        m[i][j] = row[j - 1]

print()
matriks(baris, kolom, m)