#include <stdio.h>

int main()
{
    int jumlahRuangan;

    printf("Input\n");
    scanf("%d", &jumlahRuangan);

    int zetsu_putih[jumlahRuangan];
    for (int i = 0; i < jumlahRuangan; i++)
    {
        scanf("%d", &zetsu_putih[i]);
    }

    // Menghitung jumlah zetsu putih setelah membelah diri pada setiap ruangan
    for (int i = 0; i < jumlahRuangan; i++)
    {
        zetsu_putih[i] *= (i + 1);
    }

    printf("\nOutput\n");
    for (int i = 0; i < jumlahRuangan; i++)
    {
        printf("%d ", zetsu_putih[i]);
    }
    return 0;
}
