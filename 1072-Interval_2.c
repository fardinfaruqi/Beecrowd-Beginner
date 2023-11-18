// Problem: 1072- Interval 2

#include <stdio.h>
int main()
{
    int n, c = 0, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
            c += 1;
    }
    printf("%d in\n%d out\n", c, n - c);
    return 0;
}