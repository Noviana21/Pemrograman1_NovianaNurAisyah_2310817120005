import math

print('Input')
input_satu = input()
# 40 41 | 16 65

angka = input_satu.split()
A, B = map(int, angka) # A = tinggi, B = sisi miring

C = int(math.sqrt(B ** 2 - A ** 2)) # C = alas
keliling = int(A + B + C)
luas = int(1 / 2 * C * A)

print('\nOutput')
print(f'Alas = {C} cm')
print(f'Tinggi = {A} cm')
print(f'Keliling = {keliling} cm')
print(f'Luas = {luas} cm^2')