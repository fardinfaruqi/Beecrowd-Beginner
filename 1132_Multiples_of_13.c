// problem 1132 Multiples of 13

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
    for (int i = x; i <= y; i++)
        if (i % 13 != 0)
            s += i;
    printf("%d\n", s);
    return 0;
}