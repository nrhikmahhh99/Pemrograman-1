print("Input")
n = int(input())

print("Matriks A")
matriksA = []
for i in range(n):
    row = list(map(int, input().split()))
    matriksA.append(row)

print("Matriks B")
matriksB = []
for i in range(n):
    row = list(map(int, input().split()))
    matriksB.append(row)

# Menghitung hasil perkalian matriks
hasil = [[0 for _ in range(n)] for _ in range(n)]
for i in range(n):
    for j in range(n):
        for k in range(n):
            hasil[i][j] += matriksA[i][k] * matriksB[k][j]

# hasil perkalian matriks
print("\nOutput\nMatriks AXB")
for i in range(n):
    for j in range(n):
        print(hasil[i][j], end=" ")
    print()
