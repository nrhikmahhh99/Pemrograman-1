#include <stdio.h>

int main()
{
    int n, kelipatan;

    printf("Input\n");
    scanf("%d %d", &n, &kelipatan);

    int hasil[n];
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        int jumlah = 0;

        for (int j = i; j >= 0; j--)
        {
            jumlah += (j + 1) * kelipatan;
        }

        hasil[i] = jumlah;

        total += jumlah;
    }

    printf("\nOutput\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("(%d * %d)", j + 1, kelipatan);
            if (j > 0)
            {
                printf(" + ");
            }
        }
        printf(" = %d\n", hasil[i]);
    }

    printf("%d\n", total);

    return 0;
}