#include <stdio.h>
void Biodata(int tahunLahir, char *Namaku, char *Asal)
{
    int tahun_sekarang = 2020;
    // Lengkapi Function ini
    int umur = tahun_sekarang - tahunLahir;
    int angkatan = tahunLahir + umur;

    printf("\nPerkenalkan Nama Saya : %s\n", Namaku);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", angkatan);
    printf("Asal Saya dari : %s\n", Asal);
}
int main()
{
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf(" %d", &tahunLahir);
    scanf(" %[^\n]%*c", &Namaku);
    scanf(" %[^\n]%*c", &Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}