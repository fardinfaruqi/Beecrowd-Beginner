#include <stdio.h>
int main()
{
    char a[5];
    double x, y;
    scanf("%s %lf %lf", a, &x, &y);
    printf("TOTAL = R$ %.2lf\n", y * 0.15 + x);
    return 0;
}