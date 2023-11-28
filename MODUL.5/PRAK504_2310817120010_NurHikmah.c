#include <stdio.h>
int reverse(int angka)
{
    // Lengkapi Function ini
    int reversed = 0;
    while (angka > 0)
    {
        int digit = angka % 10;
        reversed = reversed * 10 + digit;
        angka /= 10;
    }
    return reversed;
}
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
}