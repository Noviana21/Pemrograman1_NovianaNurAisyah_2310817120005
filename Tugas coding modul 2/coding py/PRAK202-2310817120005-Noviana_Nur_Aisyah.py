# TEST CASE KE-1
# Nilai pertama 14
# Nilai kedua 20.5

# TEST CASE KE-2
# Nilai pertama 0.45
# Nilai kedua 99.5

print('Input')
satu = input('Masukkan Nilai Pertama : ')
dua = input('Masukkan Nilai Kedua : ')
tiga = float(satu) + float(dua)

print('\nOutput')
print(f'Hasil dari penjumlahan nilai pertama "{satu}" dan nilai kedua "{dua}" adalah “{tiga:.2f}”')