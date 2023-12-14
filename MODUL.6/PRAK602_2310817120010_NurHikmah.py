print("Input")
jumlah_ruangan = int(input())
zetsuputih_per_ruangan = list(map(int, input().split()))

# Proses pembelahan zetsu putih
for i in range(jumlah_ruangan):
    zetsuputih_per_ruangan[i] = zetsuputih_per_ruangan[i] * (i + 1)


print("\nOutput")
for zetsu in zetsuputih_per_ruangan:
    print(zetsu, end=" ")
