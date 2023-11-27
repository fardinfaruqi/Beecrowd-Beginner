// Problem 1144 Logical Sequence

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d %d %d\n%d %d %d\n", i, i * i, i * i * i, i, i * i + 1, i * i * i + 1);
    return 0;
}