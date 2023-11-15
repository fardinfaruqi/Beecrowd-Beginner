// problem 1048 Salary Increase

#include <stdio.h>
int main()
{
    float s;
    scanf("%f", &s);
    if (s >= 0 && s <= 400.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s + s * .15, s * .15, 15);
    }
    else if (s <= 800.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s + s * .12, s * .12, 12);
    }
    else if (s <= 1200.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s + s * .10, s * .10, 10);
    }
    else if (s <= 2000.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s + s * .07, s * .07, 7);
    }
    else if (s > 2000.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s + s * .04, s * .04, 4);
    }
    return 0;
}