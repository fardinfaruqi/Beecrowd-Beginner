// Problem 1175 - Array change I

#include <stdio.h>
int main()
{
    int n[20];
    for (int i = 0; i < 20; i++)
        scanf("%d", &n[i]);
    for (int i = 20; i > 0; i--)
        printf("N[%d] = %d\n", 20 - i, n[i - 1]);
    return 0;
}