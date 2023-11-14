#include <stdio.h>

int main()
{
    float n = 0.729980;
    n -= (n / 0.50) * 0.50;
    printf("%.10f\n", n);
    return 0;
}