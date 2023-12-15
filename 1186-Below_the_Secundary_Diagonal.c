// Problem 1186 - Below the Secundary Diagonal

#include <stdio.h>
int main()
{
    char c;
    int x = 0;
    scanf(" %c", &c);
    double m, s = 0.0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m);
            if (j > 11 - i)
            {
                s += m;
                x++;
            }
        }
    }
    if (c == 'S')
        printf("%.1lf\n", s);
    if (c == 'M')
        printf("%.1lf\n", s / x);
    return 0;
}