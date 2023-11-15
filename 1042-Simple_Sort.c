// Problem 1042 Simple Sort

#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    int a[3] = {x, y, z};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a[0], a[1], a[2], x, y, z);
    return 0;
}