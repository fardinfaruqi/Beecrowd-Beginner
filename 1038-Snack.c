// problem 1038 Snack

#include <stdio.h>
int main()
{
    int c, n;
    scanf("%d%d", &c, &n);
    switch (c)
    {
    case 1:
        printf("Total: R$ %.2f\n", 4.00 * n);
        break;
    case 2:
        printf("Total: R$ %.2f\n", 4.50 * n);
        break;
    case 3:
        printf("Total: R$ %.2f\n", 5.00 * n);
        break;
    case 4:
        printf("Total: R$ %.2f\n", 2.00 * n);
        break;
    case 5:
        printf("Total: R$ %.2f\n", 1.50 * n);
        break;
    default:
        break;
    }
    return 0;
}