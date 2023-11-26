// 1116 Dividing X by Y

#include <stdio.h>
int main()
{
    int t, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &x, &y);
        if (y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", (float)x / y);
    }
    return 0;
}