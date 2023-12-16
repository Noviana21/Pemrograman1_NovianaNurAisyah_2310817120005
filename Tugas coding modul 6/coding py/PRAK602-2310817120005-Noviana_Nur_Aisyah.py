def zetsu_putih(jumlah, zetsu):
    for i in range(jumlah):
        print(zetsu[i] * (i + 1), end=" ")

bebas = int(input())

zetsu = [int(j) for j in input().split()]

print()
zetsu_putih(bebas, zetsu)