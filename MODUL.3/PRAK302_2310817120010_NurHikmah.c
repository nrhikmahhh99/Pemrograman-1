#include <stdio.h>

int main()
{
    int nilai;

    printf("Input\n");
    scanf("%d", &nilai);

    if (nilai >= 80 && nilai <= 100)
    {
        printf("\nOutput \nA");
    }
    else if (nilai >= 70 && nilai <= 79)
    {
        printf("\nOutput \nB");
    }
    else if (nilai >= 60 && nilai <= 69)
    {
        printf("\nOutput \nC");
    }
    else if (nilai >= 50 && nilai <= 59)
    {
        printf("\nOutput \nD");
    }
    else
    {
        printf("\nOutput \nE");
    }
    return 0;
}