#include <stdio.h>

int main()
{
    float satu, dua, kecil, besar;

    printf("Input\n");
    scanf("%f %f", &satu, &dua);

    if (satu <= dua)
    {
        kecil = satu;
        besar = dua;
    }
    else
    {
        kecil = dua;
        besar = satu;
    }
    printf("\nOutput \n%.f %.f", kecil, besar);

    return 0;
}