// Problem 1179 - Array Fill IV

#include <stdio.h>
int main()
{
    int n, x[5], y[5], en = 0, od = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            x[en] = n;
            en++;
        }
        else
        {
            y[od] = n;
            od++;
        }
        if (en == 5)
        {
            for (int i = 0; i < en; i++)
                printf("par[%d] = %d\n", i, x[i]);
            en = 0;
        }
        if (od == 5)
        {
            for (int i = 0; i < od; i++)
                printf("impar[%d] = %d\n", i, y[i]);
            od = 0;
        }
    }
    for (int i = 0; i < od; i++)
        printf("impar[%d] = %d\n", i, y[i]);
    for (int i = 0; i < en; i++)
        printf("par[%d] = %d\n", i, x[i]);
    return 0;
}