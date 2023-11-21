// Problem: 1080 - Highest and Position
#include <stdio.h>
int main()
{
    int x, h, p = 1;
    scanf("%d", &x);
    h = x;
    for (int i = 2; i < 101; i++)
    {
        scanf("%d", &x);
        if (x > h)
        {
            h = x;
            p = i;
        }
    }
    printf("%d\n%d\n", h, p);
    return 0;
}