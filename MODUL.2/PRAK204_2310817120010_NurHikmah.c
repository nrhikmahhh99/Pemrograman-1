#include <stdio.h>
#include <math.h>

#define phi 3.142857

int main()
{
    float r, t, V, L, K;

    printf("Input\n");
    scanf("%f %f", &r, &t);

    V = phi * r * r * t;
    L = 2 * phi * r * (r + t);
    K = 2 * phi * r;

    printf("\nOutput\nVolume    = %.2f\n", V);
    printf("Luas      = %.2f\n", L);
    printf("Keliling  = %.2f\n", K);

    return 0;
}
