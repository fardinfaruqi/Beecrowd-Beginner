// problem - 1021_Banknotes_and_Coins

#include <stdio.h>
int main()
{
    double n;
    int note[] = {100, 50, 20, 10, 5, 2}, coin[] = {100, 50, 25, 10, 5, 1};
    scanf("%lf", &n);
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
    {
        int c = n / note[i];
        printf("%d nota(s) de R$ %.2f\n", c, (float)note[i]);
        n -= c * note[i];
    }
    n *= 100;
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++)
    {
        int c = n/coin[i];
        printf("%d moeda(s) de R$ %.2f\n", c, (float)coin[i]/100);
        n -= c * coin[i];
    }
    return 0;
}