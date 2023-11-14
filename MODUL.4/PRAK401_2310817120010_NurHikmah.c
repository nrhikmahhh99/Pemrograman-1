#include <stdio.h>

int main()
{
    int bilangan_kelipatan, i;
    char simbol;

    printf("Input\n");
    scanf("%d %c", &bilangan_kelipatan, &simbol);

    printf("\nOutput\n");
    for (i = 1; i <= 50; i++)
    {
        if (i % bilangan_kelipatan == 0)
        {
            printf("%c ", simbol);
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}