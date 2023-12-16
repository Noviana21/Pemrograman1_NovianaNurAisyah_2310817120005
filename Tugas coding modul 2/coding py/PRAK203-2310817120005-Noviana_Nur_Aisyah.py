# 20 3 4 12 5 9 | 12 2 10 4 3 14
print('Input')
input_aja = input()

angka = input_aja.split()

a, b, i, j, x, y = map(float, angka)

# a dikurang b dikali dengan i dibagi j dikurang dengan x ditambah y 
hasil = (a - b) * i / j - (x + y)
print('\nOutput')
print(f'{hasil:.3f}')