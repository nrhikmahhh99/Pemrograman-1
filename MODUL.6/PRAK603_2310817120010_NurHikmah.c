#include <stdio.h>

void Ruli(int n1, int n2, int baris1[n1], int baris2[n2])
{
    for (int i = 0; i < n1; i++)
    {
        printf("%d ", baris1[i] * baris2[i]);
    }
    printf("\n");
}

int main()
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 != n2)
    {
        printf("\nJumlah tidak sama\n");
        return 0;
    }

    int baris1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &baris1[i]);
    }

    int baris2[n2];
    for (int j = 0; j < n2; j++)
    {
        scanf("%d", &baris2[j]);
    }
    printf("\n");
    Ruli(n1, n2, baris1, baris2);

    return 0;
}