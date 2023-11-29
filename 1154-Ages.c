// Problem 1154 Ages

#include <stdio.h>
int main()
{
    int a = 0, s = 0, c = 0;
    while (1)
    {
        scanf("%d", &a);
        if (a < 0)
            break;
        s += a;
        c++;
    }
    printf("%.2f\n", (float)s / c);
    return 0;
}