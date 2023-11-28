def biodata(tahun_lahir, namaku, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahun_lahir
    angkatan = tahun_lahir + umur

    print(f"\nPerkenalkan Nama Saya : {namaku}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {angkatan}")
    print(f"Asal Saya dari : {asal}")

tahun_lahir = int(input())
namaku = input()
asal = input()
biodata(tahun_lahir, namaku, asal)
