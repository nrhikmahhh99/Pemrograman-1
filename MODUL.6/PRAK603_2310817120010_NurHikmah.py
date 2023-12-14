def ruli(n1, n2, baris1, baris2):
    for i in range(n1):
        print(baris1[i] * baris2[i], end=" ")

n1, n2 = map(int, input().split())

if n1 != n2:
    print("\nJumlah tidak sama")
    exit()

baris1 = list(map(int, input().split()))
baris2 = list(map(int, input().split()))

print()
ruli(n1, n2, baris1, baris2)
    