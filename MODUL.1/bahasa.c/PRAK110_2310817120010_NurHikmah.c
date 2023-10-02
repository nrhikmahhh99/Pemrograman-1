#include <stdio.h>
#include <math.h>
void main()
{
    int A, B, C, pythagoras, keliling, luas;
    C = 5;
    A = 12;
    pythagoras = pow(A, 2) + pow(C, 2);
    B = sqrt(pythagoras);
    keliling = A + B + C;
    luas = (C * A) / 2;
    printf("Diketahui : \nAlas = %d cm \nTinggi = %d cm \n\n", C, A);
    printf("Jawab : \nSisi A = %d cm \nSisi B = %d cm \nSisi C = %d cm \n", A, B, C);
    printf("Keliling = %d cm \nLuas = %d cm persegi", keliling, luas);
}