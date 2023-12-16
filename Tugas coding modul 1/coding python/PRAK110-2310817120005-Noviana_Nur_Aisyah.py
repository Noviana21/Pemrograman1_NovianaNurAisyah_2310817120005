import math

A = 5 
C = 12 
# pythagoras
B = int(math.sqrt(A ** 2 + C ** 2))
keliling = A + B + C
luas = int(1 / 2 * A * C)

print(f'Diketahui : \nAlas = {A} cm\nTinggi = {C} cm\n')
print(f'Jawab : \nSisi A = {C} cm\nSisi B = {B} cm\nSisi C = {A} cm')
print(f'Keliling = {keliling} cm\nLuas = {luas} cm²')