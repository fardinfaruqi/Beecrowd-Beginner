// problem 1046 Game Time

#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (x >= y)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24 - x + y);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n", y - x);
    }
    return 0;
}