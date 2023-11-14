angka1, angka2 = map(int, input("Input\n").split())

if angka1 < angka2:
    awal, akhir, step = angka1, angka2, 1
else:
    awal, akhir, step = angka1, angka2, -1

print("\nOutput")
for i in range(awal, akhir + step, step):
    if i != awal:
        print(" - ", end="")
    print(f"{i} {akhir - (i - awal)}", end="")