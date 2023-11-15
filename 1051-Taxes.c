// problem 1051 Taxes

#include <stdio.h>
int main()
{
    float s, t = 0;
    scanf("%f", &s);
    if (s > 4500)
    {
        t += (s - 4500) * .28;
        s = 4500;
    }
    if (s > 3000)
    {
        t += (s - 3000) * .18;
        s = 3000;
    }
    if (s > 2000)
    {
        t += (s - 2000) * .08;
        printf("R$ %.2f\n", t);
    }
    else
        printf("Isento\n");
    return 0;
}