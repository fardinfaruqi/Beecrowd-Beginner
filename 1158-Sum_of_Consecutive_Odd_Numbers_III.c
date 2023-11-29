// Problem 1158 Sum of Consecutive Odd Numbers III

#include <stdio.h>
int main()
{
    int n, x, y, s;
    scanf("%d", &n);
    while (n--)
    {
        s = 0;
        scanf("%d%d", &x, &y);
        for (x; y != 0; x++)
            if (x % 2 != 0)
            {
                s += x;
                y--;
            }
        printf("%d\n", s);
    }
    return 0;
}