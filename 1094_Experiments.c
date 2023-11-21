// Problem: 1094 Experiments

#include <stdio.h>
int main()
{
    int N, n, t = 0, c = 0, r = 0, s = 0;
    char a;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %c", &n, &a);
        t += n;
        if (a == 'C')
            c += n;
        if (a == 'R')
            r += n;
        if (a == 'S')
            s += n;
    }
    float p = 100.0 / t;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", t, c, r, s, p * c, p * r, p * s);
    return 0;
}