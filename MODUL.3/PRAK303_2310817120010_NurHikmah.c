#include <stdio.h>

int main()
{
    int nilai;

    printf("Input\n");
    scanf("%d", &nilai);

    if (nilai > 0)
    {
        printf("\nOutput \npositif\n");
    }
    else if (nilai < 0)
    {
        printf("\nOutput \nnegatif\n");
    }
    else
    {
        printf("\nOutput \nnol\n");
    }
    return 0;
}
