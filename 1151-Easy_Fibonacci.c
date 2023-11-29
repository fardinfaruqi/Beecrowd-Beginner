// Problem 1151 Easy Fibonacci

#include <stdio.h>
int main()
{
    int x, a = 0, b = 1;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        if (i < x)
            printf("%d ", a);
        else
            printf("%d\n", a);
        int t = a;
        a = b;
        b = a + t;
    }
    return 0;
}