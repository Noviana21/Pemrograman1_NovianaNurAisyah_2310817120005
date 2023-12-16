print('Input')
input_aja = input() 
# jari-jari # tinggi bejana
# 7 10 | 10 10

angka = input_aja.split()

angka1, angka2 = map(int, angka)
# angka1 = jari-jari, angka2 = tinggi

phi = 22 / 7
v = phi * (angka1**2) * angka2
l = 2 * phi * angka1 * (angka1 + angka2)
k =  2 * phi * angka1

print('\nOutput')
print(f'Volume = {v:.2f}')
print(f'Luas = {l:.2f}')
print(f'Keliling = {k:.2f}')