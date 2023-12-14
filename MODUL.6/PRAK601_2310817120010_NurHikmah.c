#include <stdio.h>

int main()
{
    int baris, kolom;

    printf("Input\n");
    scanf("%d %d", &baris, &kolom);

    int matriks[baris][kolom];
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            scanf("%d", &matriks[i][j]);
        }
    }

    // Menampilkan matriks
    printf("\nOutput\n");
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
