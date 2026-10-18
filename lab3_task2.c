#include <stdio.h>

int sum_of_digits(int n)
{
    if (n < 0)
        return sum_of_digits(-n);
    if (n < 10)
        return n;
    return (n % 10) + sum_of_digits(n / 10);
}

int main(void)
{
    int n;
    printf("Vvedit ctile chislo: ");
    scanf("%d", &n);
    printf("Suma chisel %d dorivnue: %d\n", n, sum_of_digits(n));
    return 0;
}
