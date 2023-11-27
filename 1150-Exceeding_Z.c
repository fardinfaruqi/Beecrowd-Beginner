// Problem 1150 Exceeding Z

#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    while (y <= x)
        scanf("%d", &y);
    int s = x, i = 1;
    x++;
    while (s <= y && i++)
    {
        s += x;
        x++;
    }
    printf("%d\n", i);
    return 0;
}