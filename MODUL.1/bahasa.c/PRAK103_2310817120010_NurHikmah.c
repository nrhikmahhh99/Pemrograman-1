#include <stdio.h>

void main()
{
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;
    float p;
    p = (float)(a + b) * x / y;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", p);
}