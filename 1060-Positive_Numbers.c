// problem - 1060 Positive Numbers

#include <stdio.h>
int main()
{
    float a[6];
    int c = 0;
    for (int i = 0; i < 6; i++)
        scanf("%f", &a[i]);
    for (int i = 0; i < 6; i++)
    {
        if (a[i] >= 0)
            c++;
    }
    printf("%d valores positivos\n", c);
    return 0;
}