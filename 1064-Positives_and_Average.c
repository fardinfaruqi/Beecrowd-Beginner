// problem: 1064-Positives_and_Average

#include <stdio.h>
int main()
{
    float a[6], s = 0;
    int c = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &a[i]);
        if (a[i] >= 0)
        {
            s += a[i];
            c++;
        }
    }
    printf("%d valores positivos\n%.1f\n", c, s / c);
    return 0;
}