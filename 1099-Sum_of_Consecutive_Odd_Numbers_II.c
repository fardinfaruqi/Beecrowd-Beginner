// problem - 1099 Sum of Consecutive Odd Numbers II

#include <stdio.h>
int main()
{
    int n, x, y, s, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        s = 0;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            t = x;
            x = y;
            y = t;
        }
        for (int j = x + 1; j < y; j++)
        {
            if (j % 2 != 0)
                s += j;
        }
        printf("%d\n", s);
    }
    return 0;
}