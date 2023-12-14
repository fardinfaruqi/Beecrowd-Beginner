// problem 1174 - Array Selection I

#include <stdio.h>
int main()
{
    float x;
    for (int i = 0; i < 100; i++)
    {
        scanf("%f", &x);
        if (x <= 10)
            printf("A[%d] = %.1f\n", i, x);
    }
    return 0;
}