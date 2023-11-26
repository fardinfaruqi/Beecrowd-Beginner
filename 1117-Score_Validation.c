// 1117 Score Validation

#include <stdio.h>
int main()
{
    float x, s = 0;
    int c = 0;
    while (c != 2)
    {
        scanf("%f", &x);
        if (x >= 0 && x <= 10.0)
        {
            s += x;
            c++;
        }
        else
            printf("nota invalida\n");
        if (c == 2)
            printf("media = %.2f\n", s / 2);
    }
    return 0;
}