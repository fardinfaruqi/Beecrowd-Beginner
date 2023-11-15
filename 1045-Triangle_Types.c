// problem 1045 Triangle Types

#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double x[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (x[i] < x[j])
            {
                double t = x[i];
                x[i] = x[j];
                x[j] = t;
            }
        }
    }
    if (x[0] >= x[1] + x[2])
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (x[0] * x[0] == x[1] * x[1] + x[2] * x[2])
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (x[0] * x[0] > x[1] * x[1] + x[2] * x[2])
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (x[0] * x[0] < x[1] * x[1] + x[2] * x[2])
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (x[0] == x[1] && x[1] == x[2])
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (x[0] == x[1] || x[0] == x[2] || x[1] == x[2])
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}