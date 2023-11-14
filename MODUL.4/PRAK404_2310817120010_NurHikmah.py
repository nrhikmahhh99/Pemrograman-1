while True:
    print("\nPilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan : "))

    if 1 <= pilihan <= 4:
        nilai1 = float(input("Masukkan nilai pertama : "))
        nilai2 = float(input("Masukkan nilai kedua : "))

        if pilihan == 1:
            hasil = nilai1 + nilai2
            print(f"Hasil penjumlahan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
        elif pilihan == 2:
            hasil = nilai1 - nilai2
            print(f"Hasil pengurangan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
        elif pilihan == 3:
            hasil = nilai1 * nilai2
            print(f"Hasil perkalian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
        elif pilihan == 4:
            hasil = nilai1 / nilai2
            print(f"Hasil pembagian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
    elif pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator NURHIKMAH")
        break
    else:
        print("Input anda salah, silahkan coba lagi")
