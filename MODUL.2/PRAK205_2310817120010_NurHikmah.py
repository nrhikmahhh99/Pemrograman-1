import math

print('Input')
nilai = input()

angka = nilai.split()
A, B = map(int, angka)

C = int(math.sqrt(B ** 2 - A ** 2)) 
keliling = int(A + B + C)
luas = int(1 / 2 * C * A)

print('\nOutput')
print(f'Alas        = {C} cm')
print(f'Tinggi      = {A} cm')
print(f'Keliling    = {keliling} cm')
print(f'Luas        = {luas} cm^2')
