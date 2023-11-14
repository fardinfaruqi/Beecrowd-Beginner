// problem 1036 Bhaskara's Formula

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (2 * a == 0 || (pow(b, 2) - 4 * a * c) < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n", (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a), (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a));
    }
    return 0;
}