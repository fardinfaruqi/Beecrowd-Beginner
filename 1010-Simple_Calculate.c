#include <stdio.h>
struct product
{
    int a, b;
    float c;
} p1, p2;
int main()
{
    scanf("%d %d %f %d %d %f", &p1.a, &p1.b, &p1.c, &p2.a, &p2.b, &p2.c);
    printf("VALOR A PAGAR: R$ %.2f\n", (p1.b * p1.c) + (p2.b * p2.c));
    return 0;
}
