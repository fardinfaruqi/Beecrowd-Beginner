// Problem 1134 Type of Fuel

#include <stdio.h>
int main()
{
    int x = 0, a = 0, g = 0, d = 0;
    while (x != 4)
    {
        scanf("%d", &x);
        if (x == 1)
            a++;
        if (x == 2)
            g++;
        if (x == 3)
            d++;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", a, g, d);
    return 0;
}