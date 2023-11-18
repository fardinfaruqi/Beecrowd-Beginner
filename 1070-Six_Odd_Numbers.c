// problem: 1070 - Six Odd Numbers

#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = x, j = 0; 1; i++)
    {
        if (i % 2 != 0)
            printf("%d\n", i, j++);
        if (j == 6)
            break;
    }
    return 0;
}