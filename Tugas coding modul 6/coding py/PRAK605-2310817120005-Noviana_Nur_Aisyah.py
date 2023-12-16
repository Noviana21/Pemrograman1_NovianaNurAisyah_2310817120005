def matriks1(b, A, B):
    m = [[0] * (b + 1) for _ in range(b + 1)]

    for i in range(1, b + 1):
        for j in range(1, b + 1):
            m[i][j] = 0
            
            for k in range(1, b + 1):
                m[i][j] += A[i][k] * B[k][j]

    return m

def matriks2(b, matrix):
    for i in range(1, b + 1):
        for j in range(1, b + 1):
            print(matrix[i][j], end=" ")

        print()

b = int(input())

A = [[0] * (b + 1) for _ in range(b + 1)]
B = [[0] * (b + 1) for _ in range(b + 1)]

print("Matriks A")
for i in range(1, b + 1):
    A[i][1:b + 1] = map(int, input().split())

print("Matriks B")
for i in range(1, b + 1):
    B[i][1:b + 1] = map(int, input().split())

hasil = matriks1(b, A, B)

print("Matriks AXB")
matriks2(b, hasil)