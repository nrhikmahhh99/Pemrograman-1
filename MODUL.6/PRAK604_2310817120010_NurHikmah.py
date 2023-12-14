def shikamaru(kode, pesan):
    for i in range(len(kode)):
        if kode[i] == ' ' and pesan[i] == ' ':
            pesan[i] = ' '
        elif kode[i] == pesan[i]:
            pesan[i] = '*'
        else:
            pesan[i] = '#'

kode = input().rstrip('\n')
pesan = input().rstrip('\n')

if len(kode) != len(pesan):
    print("\nPanjang kalimat berbeda, pesan palsu")
    exit()

pesan_diterima = list(pesan)
shikamaru(kode, pesan_diterima)

bintang = pesan_diterima.count('*')
pagar = pesan_diterima.count('#')

print()
print(''.join(pesan_diterima))
print(f"* = {bintang}")
print(f"# = {pagar}")

if bintang >= pagar:
    print("Pesan Asli")
else:
    print("Pesan Palsu")
