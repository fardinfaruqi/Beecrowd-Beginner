// Problem 1142 PUM

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; n != 0; i += 4, n--)
        printf("%d %d %d PUM\n", i, i + 1, i + 2);
    return 0;
}