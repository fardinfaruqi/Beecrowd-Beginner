// Problem 1159 Sum of Consecutive Even Numbers

#include <stdio.h>
int main()
{
    int x, s, t;
    while (1)
    {
        s = 0;
        t = 5;
        scanf("%d", &x);
        if (x == 0)
            break;
        for (; t > 0; x++)
            if (x % 2 == 0)
            {
                s += x;
                t--;
            }
        printf("%d\n", s);
    }
    return 0;
}