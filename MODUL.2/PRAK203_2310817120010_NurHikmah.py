print('Input')
bilangan = input().split()

a, b, i, j, x, y = map(float, bilangan)

hasil = (a - b) * (i / j) - (x + y)

print('\nOutput')
print(f'{hasil:.3f}')
