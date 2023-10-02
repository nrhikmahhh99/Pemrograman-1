#include <stdio.h>

void main()
{
    int a, b, x, y, p, q, pq;
    a = 9;
    b = 5;
    x = 8;
    y = 8;
    p = (int)a % b;
    q = (int)x % y;
    pq = (int)p + q;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", pq);
}