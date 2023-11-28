def hitung(nilai1, nilai2):
    return abs(nilai1 - nilai2)

a, c, b, d = map(int, input().split())
hasil = hitung(a, b) + hitung(c, d)
print(abs(hasil))