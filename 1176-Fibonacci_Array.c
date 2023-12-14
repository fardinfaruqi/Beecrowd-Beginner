// Problem 1176 - Fibonacci Array

#include <stdio.h>
int main()
{
    int t, n, z;
    unsigned long long x, y, tm;
    scanf("%d", &t);
    while (t--)
    {
        x = 0;
        y = 1;
        scanf("%d", &n);
        z = n;
        while (n--)
        {
            tm = x + y;
            x = y;
            y = tm;
        }
        printf("Fib(%d) = %llu\n", z, x);
    }
    return 0;
}