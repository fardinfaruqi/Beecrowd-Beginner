// problem 1146 Growing Sequences

#include <stdio.h>
int main()
{
    int x = 1;
    while (x != 0)
    {
        scanf("%d", &x);
        for (int i = 1; i <= x; i++)
        {
            printf("%d", i);
            if (i != x)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}