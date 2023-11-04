#include <stdio.h>

int main()
{
    int detik, sisa_detik, menit, jam, hari;

    printf("Input\n");
    scanf("%d", &detik);

    hari = detik / (24 * 3600);
    jam = (detik % (24 * 3600)) / 3600;
    menit = (detik % 3600) / 60;
    sisa_detik = detik % 60;

    if (hari > 0)
    {
        printf("\nOutput \n%d hari %02d:%02d:%02d", hari, jam, menit, sisa_detik);
    }
    else
    {
        printf("\nOutput \n%02d:%02d:%02d", jam, menit, sisa_detik);
    }
    return 0;
}