n, kelipatan = map(int, input("Input\n").split())

hasil = []
total = 0

for i in range(n):
    jumlah = 0

    for j in range(i, -1, -1):
        jumlah += (j + 1) * kelipatan

    hasil.append(jumlah)
    total += jumlah

print("\nOutput")
for i in range(n):
    for j in range(i, -1, -1):
        print(f"({j + 1} * {kelipatan})", end="")
        if j > 0:
            print(" + ", end="")
    print(f" = {hasil[i]}")

print(total)