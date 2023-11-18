// Problem: 1071- Sum of Consecutive Odd Numbers I

#include <stdio.h>
int main()
{
    int x, y, s = 0;
    scanf("%d%d", &x, &y);
    if (x > y)
    {
        int t = x;
        x = y;
        y = t;
    }
    for (int i = x + 1; i < y; i++)
    {
        if (i % 2 != 0)
            s += i;
    }
    printf("%d\n", s);
    return 0;
}