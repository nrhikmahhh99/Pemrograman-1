print("Input")
baris, kolom = map(int, input().split())

matriks = []
input_nilai = list(map(int, input().split()))

index = 0
for i in range(baris):
    row = []
    for j in range(kolom):
        row.append(input_nilai[index])
        index += 1
    matriks.append(row)

print("\nOutput")
for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end=" ")
    print()
