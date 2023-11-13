#include <stdio.h>
int main()
{
    int d;
    scanf("%d", &d);
    printf("%.lf minutos\n", 60 * ((double)d / 30));
    return 0;
}