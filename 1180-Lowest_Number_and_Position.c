// Problem 1180 - Lowest Number and Position

#include <stdio.h>
int main()
{
    int s, n, l = 0, p = 0;
    scanf("%d", &s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &n);
        if (i == 0)
            l = n;
        else if (l > n)
        {
            l = n;
            p = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", l, p);
    return 0;
}