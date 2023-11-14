#include <stdio.h>

int main()
{
    int batas, i;

    printf("Input\n");
    scanf("%d", &batas);

    printf("\nOutput\n");
    for (i = 1; i <= batas; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (i = batas; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}