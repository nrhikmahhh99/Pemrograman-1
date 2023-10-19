#include <stdio.h>
int main()
{
    float Nilai_satu, Nilai_dua, Hasil;

    printf("Masukkan Nilai Pertama      : ");
    scanf("%f", &Nilai_satu);

    printf("Masukkan Nilai Pertama      : ");
    scanf("%f", &Nilai_dua);

    Hasil = Nilai_satu + Nilai_dua;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\n", Nilai_satu, Nilai_dua, Hasil);

    return 0;
}
