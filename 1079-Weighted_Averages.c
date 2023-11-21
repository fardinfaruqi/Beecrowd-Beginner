// Problem: 1079 - Weighted Averages

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float a[n * 3];
    for (int i = 0; i < n * 3; i++)
        scanf("%f", &a[i]);
    for (int i = 0; i < n * 3; i += 3)
        printf("%.1f\n", (a[i] * 2 + a[i + 1] * 3 + a[i + 2] * 5) / 10);
    return 0;
}