#include <stdio.h>

int main()
{
    int pilihan;
    float nilai1, nilai2, hasil;

    do
    {
        printf("\nPilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4)
        {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai2);

            switch (pilihan)
            {
            case 1:
                hasil = nilai1 + nilai2;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
                break;
            case 2:
                hasil = nilai1 - nilai2;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
                break;
            case 3:
                hasil = nilai1 * nilai2;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
                break;
            case 4:
                hasil = nilai1 / nilai2;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
                break;
            }
        }
        else if (pilihan == 5)
        {
            printf("Terimakasih, telah menggunakan kalkulator NURHIKMAH\n");
            break;
        }
        else
        {
            printf("Input anda salah, silahkan coba lagi\n");
        }

    } while (1);

    return 0;
}