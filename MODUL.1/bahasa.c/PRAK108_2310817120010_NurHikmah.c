#include <stdio.h>
void main()
{
    int k, j;
    k = 5;
    j = 14;
    float phi, r;
    phi = 3.14;
    /* j = 2πr
    j/5 = 2*3,14*r
    r = j / 31,4 */
    r = (float)j / 31.4;
    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran \n", k);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer \n\n", j);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", r);
}
