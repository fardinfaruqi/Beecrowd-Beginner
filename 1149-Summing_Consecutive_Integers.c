// problem 1149 Summing Consecutive Integers

#include <stdio.h>
int main()
{
    int a, n = 0;
    scanf("%d", &a);
    while (n < 1)
        scanf("%d", &n);
    printf("%d\n", (a * 2 + n - 1) * n / 2);
    return 0;
}