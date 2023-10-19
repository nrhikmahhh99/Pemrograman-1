#include <stdio.h>
#include <math.h>

int main()
{
    int A, B;
    printf("Input\n");
    scanf("%d %d", &A, &B);

    int C = sqrt(pow(B, 2) - (pow(A, 2)));
    int keliling = A + B + C;
    int luas = (C * A) / 2;

    printf("\nOutput\n");
    printf("Alas        = %d cm \n", C);
    printf("Tinggi      = %d cm \n", A);
    printf("Keliling    = %d cm \n", keliling);
    printf("Luas        = %d cm^2 \n", luas);

    return 0;
}