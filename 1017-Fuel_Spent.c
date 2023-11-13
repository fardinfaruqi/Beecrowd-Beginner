#include <stdio.h>
int main()
{
    int x, y;
    scanf(" %d %d", &x, &y);
    printf("%.3lf\n", (double)(x * y) / 12);
    return 0;
}