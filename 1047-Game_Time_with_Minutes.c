// problem 1047 Game Time with Minutes

#include <stdio.h>
int main()
{
    int h1, m1, h2, m2;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
    if (h1 >= h2 && m1 >= m2)
    {
        int m = (24 - h1 + h2) * 60 + m2 - m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", m / 60, m % 60);
    }
    else
    {
        int m = (h2 - h1) * 60 + m2 - m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", m / 60, m % 60);
    }
    return 0;
}