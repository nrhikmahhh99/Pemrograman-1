print('Input')
bilangan = input()

nilai = bilangan.split()

r, t = map(int, nilai)

phi = 22 / 7
V = phi * (r**2) * t
L = 2 * phi * r * (r + t)
K =  2 * phi * r

print('\nOutput')
print(f'Volume   = {V:.2f}')
print(f'Luas     = {L:.2f}')
print(f'Keliling = {K:.2f}')
