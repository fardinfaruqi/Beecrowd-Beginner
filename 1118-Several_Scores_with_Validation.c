// 1118 Several Scores with Validation

#include <stdio.h>
int main()
{
    double x, s = 0;
    int c = 0, y;
    while (c != 2)
    {
        scanf("%lf", &x);
        if (x >= 0 && x <= 10.0)
        {
            s += x;
            c++;
        }
        else
            printf("nota invalida\n");
        if (c == 2)
        {
            printf("media = %.2lf\n", s / 2);
            s = 0;
            while (c != 0)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &y);
                if (y == 1)
                    c = 0;
                else if (y == 2)
                    break;
                else
                    continue;
            }
        }
    }
    return 0;
}