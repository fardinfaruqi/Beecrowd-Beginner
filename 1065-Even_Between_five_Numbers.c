// problem: 1065-Even_Between_five_Numbers

#include <stdio.h>
int main()
{
    int a[5], e = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            e++;
    }
    printf("%d valores pares\n", e);
    return 0;
}