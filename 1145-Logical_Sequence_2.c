// Problem 1145 Logical Sequence 2

#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= y; i++)
    {
        printf("%d", i);
        if (i % x == 0)
            printf("\n");
        else
            printf(" ");
    }
    if (y % x != 0)
        printf("\n");
    return 0;
}