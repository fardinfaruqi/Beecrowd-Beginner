// problem - 1021
/**
 * Couldn't solve it in C.
 */

#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n", (int)n / 100);
    n -= (int)n / 100 * 100;
    printf("%d nota(s) de R$ 50.00\n", (int)n / 50);
    n -= (int)n / 50 * 50;
    printf("%d nota(s) de R$ 20.00\n", (int)n / 20);
    n -= (int)n / 20 * 20;
    printf("%d nota(s) de R$ 10.00\n", (int)n / 10);
    n -= (int)n / 10 * 10;
    printf("%d nota(s) de R$ 5.00\n", (int)n / 5);
    n -= (int)n / 5 * 5;
    printf("%d nota(s) de R$ 2.00\n", (int)n / 2);
    n -= (int)n / 2 * 2;
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", (int)n / 1);
    n -= (int)n / 1 * 1;
    if (n >= .50)
    {
        printf("1 moeda(s) de R$ 0.50\n");
        n -= .50;
    }
    else
    {
        printf("0 moeda(s) de R$ 0.50\n");
    }
    if (n >= .25)
    {
        printf("1 moeda(s) de R$ 0.25\n");
        n -= 0.25;
    }
    else
    {
        printf("0 moeda(s) de R$ 0.25\n");
    }
    if (n >= .10)
    {
        printf("%.f moeda(s) de R$ 0.10\n", n / .10);
        if (n >= 0.20)
            n -= 0.20;
        else
            n -= (n / 0.10) * 0.10;
    }
    else
    {
        printf("0 moeda(s) de R$ 0.10\n");
    }
    if (n >= .05)
    {
        printf("%.f moeda(s) de R$ 0.05\n", n / .05);
        n -= 0.05;
    }
    else
    {
        printf("0 moeda(s) de R$ 0.05\n");
    }
    printf("%.f moeda(s) de R$ 0.01\n", n / .01);
    return 0;
}