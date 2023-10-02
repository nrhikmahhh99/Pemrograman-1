#include <stdio.h>

void main()
{
    int a, b, c, d, e, f;
    a = 400000;
    b = 350000;
    c = a * 13 / 100;
    d = a - c;
    e = b * 21 / 100;
    f = b - e;

    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", d);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d", f);
}