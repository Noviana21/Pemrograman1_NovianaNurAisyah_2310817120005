def guru(n1, n2, kali, kali1):
    if n1 != n2:
        print("\nJumlah tidak sama \n")

    for i in range(n1):
        print(kali[i] * kali1[i], end=" ")

n1, n2 = map(int, input().split())
if n1 != n2:
    print('\nJumlah tidak sama')
    exit()

kali = [int(j) for j in input().split()]
kali1 = [int(j) for j in input().split()]

print()
guru(n1, n2, kali, kali1)