// problem - 1020

#include <stdio.h>

int main()
{
    int n, y, m, d;
    scanf("%d", &n);
    y = n / 365;
    m = (n % 365) / 30;
    d = (n % 365) % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
    return 0;
}