#include <stdio.h>

int main()
{
    int bilangan;

    printf("Input\n");
    scanf("%d", &bilangan);

    if (bilangan == 0)
    {
        printf("\nOutput \nNol");
    }
    else if (bilangan > 0 && bilangan < 10)
    {
        printf("\nOutput \nSatuan");
    }
    else if (bilangan >= 10 && bilangan < 20)
    {
        printf("\nOutput \nBelasan");
    }
    else if (bilangan >= 20 && bilangan < 100)
    {
        printf("\nOutput \nPuluhan");
    }
    else
    {
        printf("\nOutput \nAnda Menginput Melebihi Limit Bilangan");
    }
    return 0;
}