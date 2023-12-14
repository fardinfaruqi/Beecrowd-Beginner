// Problem 1165 - Prime Number

#include <stdio.h>
int main()
{
    int t, x, f;
    scanf("%d", &t);
    while (t--)
    {
        f = 0;
        scanf("%d", &x);
        if ((x % 2 == 0 || x == 1) && x != 2)
            f = 1;
        else
        {
            for (int i = 3; i < x; i++)
                if (x % i == 0)
                    f = 1;
        }
        if (f == 0)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }
    return 0;
}