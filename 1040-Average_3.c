// Beecrowd 1040: Average 3
#include <stdio.h>
int main()
{
    float n1, n2, n3, n4;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    float a = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    printf("Media: %.1f\n", a);
    if (a >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (a < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        float e;
        scanf("%f", &e);
        printf("Aluno em exame.\nNota do exame: %.1f\n", e);

        a = (a + e) / 2;
        if (a >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", a);
    }
    return 0;
}