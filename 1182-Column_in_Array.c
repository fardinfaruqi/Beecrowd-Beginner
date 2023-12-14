// Problem 1182 Column in Array

#include <stdio.h>
int main()
{
    int c;
    char ch;
    scanf("%d %c", &c, &ch);
    double m, s = 0.0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m);
            if (j == c)
                s += m;
        }
    }
    if (ch == 'S')
        printf("%.1lf\n", s);
    if (ch == 'M')
        printf("%.1lf\n", s / 12);
    return 0;
}