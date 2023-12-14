// Problem 1164_ Perfect Number

#include <stdio.h>
int main()
{
    int t, a, s;
    scanf("%d", &t);
    while (t--)
    {
        s = 0;
        scanf("%d", &a);
        for (int i = 1; i < a; i++)
            if (a % i == 0)
                s += i;
        if (a == s)
            printf("%d eh perfeito\n", a);
        else
            printf("%d nao eh perfeito\n", a);
    }
    return 0;
}