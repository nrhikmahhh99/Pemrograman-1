def max_bilangan(a, b, c, d):
    maksimal = a
    if b > maksimal:
        maksimal = b
    if c > maksimal:
        maksimal = c
    if d > maksimal:
        maksimal = d
    return maksimal

a, b, c, d = map(int, input().split())
hasil = max_bilangan(a, b, c, d)
print(hasil)
