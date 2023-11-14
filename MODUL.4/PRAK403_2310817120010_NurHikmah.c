#include <stdio.h>

void printNumbers(int angka1, int angka2)
{
    int awal, akhir, step;

    if (angka1 < angka2)
    {
        awal = angka1;
        akhir = angka2;
        step = 1;
    }
    else
    {
        awal = angka1;
        akhir = angka2;
        step = -1;
    }

    for (int i = awal; i != akhir + step; i += step)
    {
        if (i != awal)
        {
            printf(" - ");
        }
        printf("%d %d", i, akhir - (i - awal));
    }
    printf("\n");
}

int main()
{
    int angka1, angka2;

    printf("Input\n");
    scanf("%d %d", &angka1, &angka2);

    printf("\nOutput\n");
    printNumbers(angka1, angka2);

    return 0;
}