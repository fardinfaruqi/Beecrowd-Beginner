// problem 1131 Grenais

#include <stdio.h>
int main()
{
    int x, y, t, i = 0, g = 0, e = 0;
    while (1)
    {
        scanf("%d%d", &x, &y);
        if (x > y)
            i++;
        else if (y > x)
            g++;
        else
            e++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &t);
        if (t == 2)
            break;
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", i + g + e, i, g, e);
    if (i > g)
        printf("Inter venceu mais\n");
    else if (g > i)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");
    return 0;
}