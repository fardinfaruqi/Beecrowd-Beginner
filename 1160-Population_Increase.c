// Problem 1160 Population Increase

#include <stdio.h>
int main()
{
    int t, pa, pb, c;
    float g1, g2;
    scanf("%d", &t);
    while (t--)
    {
        c = 0;
        scanf("%d%d%f%f", &pa, &pb, &g1, &g2);
        while (pa <= pb)
        {
            pa += (pa * g1) / 100;
            pb += (pb * g2) / 100;
            c++;
            if (c > 100)
                break;
        }
        if (c > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", c);
    }
    return 0;
}