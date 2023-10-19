#include <stdio.h>

int main()
{
    char nama[70], nim[70], kelas_paralel[70], ttl[70], alamat[70], hobby[70], no_hp[70];

    printf("Input\n");
    printf("Nama                      : ");
    gets(nama);

    printf("NIM                       : ");
    gets(nim);

    printf("Kelas Paralel             : ");
    gets(kelas_paralel);

    printf("Tempat/Tanggal Lahir      : ");
    gets(ttl);

    printf("Alamat                    : ");
    gets(alamat);

    printf("Hobby                     : ");
    gets(hobby);

    printf("No. HP                    : ");
    gets(no_hp);

    printf("\nOutput\n");
    printf("Nama                      : %s\n", nama);
    printf("NIM                       : %s\n", nim);
    printf("Kelas Paralel             : %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir      : %s\n", ttl);
    printf("Alamat                    : %s\n", alamat);
    printf("Hobby                     : %s\n", hobby);
    printf("No. HP                    : %s\n", no_hp);

    return 0;
}
