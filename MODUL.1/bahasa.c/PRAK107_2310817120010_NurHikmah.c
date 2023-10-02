#include <stdio.h>

void main()
{
    int a, b, c, x, y, z;
    a = 4;
    b = 5;
    c = 7;
    x = 16;
    y = 85000;
    z = x * y;

    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", x);
    printf("Harga tanah Per Meter adalah %d\n", y);
    printf("Jawaban : \nBiaya yang diperlukan Pak Dengklek adalah : Rp %d", z);
}