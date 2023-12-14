#include <stdio.h>
#include <string.h>

void shikamaru(char kode[], char pesan[])
{
    for (int i = 0; i < strlen(kode); i++)
    {
        if (kode[i] == ' ' && pesan[i] == ' ')
        {
            pesan[i] = ' ';
        }
        else if (kode[i] == pesan[i])
        {
            pesan[i] = '*';
        }
        else
        {
            pesan[i] = '#';
        }
    }
}

int main()
{
    char kode[100], pesan[100];

    gets(kode);
    kode[strcspn(kode, "\n")] = '\0';
    gets(pesan);
    pesan[strcspn(pesan, "\n")] = '\0';

    if (strlen(kode) != strlen(pesan))
    {
        printf("\nPanjang kalimat berbeda, pesan palsu \n");
        return 0;
    }
    shikamaru(kode, pesan);

    int bintang = 0, pagar = 0;

    for (int i = 0; i < strlen(kode); i++)
    {
        if (pesan[i] == '*')
        {
            bintang++;
        }
        else if (pesan[i] == '#')
        {
            pagar++;
        }
    }

    printf("\n");
    printf("%s\n", pesan);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if (bintang >= pagar)
    {
        printf("Pesan Asli\n");
    }
    else
    {
        printf("Pesan Palsu\n");
    }
    return 0;
}