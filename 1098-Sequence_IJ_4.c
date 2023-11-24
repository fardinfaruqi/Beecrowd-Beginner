// Problem: 1098 Sequence IJ 4

#include <stdio.h>
int main()
{
    for (float i = 0; i <= 2.1; i += 0.2)
    {
        for (float j = 1; j <= 3; j++)
        {
            if (i - (int)i == 0)
                printf("I=%.f J=%.f\n", i, i + j);
            else
                printf("I=%.1f J=%.1f\n", i, i + j);
        }
    }

    return 0;
}