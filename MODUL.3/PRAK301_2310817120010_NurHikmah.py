satu, dua = map(int, input('Input\n').split())

if satu <= dua:
    kecil = satu
    besar = dua
else:
    kecil = dua
    besar = satu

print("\nOutput")
print(f"{int(kecil)} {int(besar)}")
