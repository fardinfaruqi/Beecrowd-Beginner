// Problem 1156 S Sequence II

#include <stdio.h>
int main()
{
    float s = 0;
    for (int i = 1, j = 1; i < 40; i += 2, j *= 2)
        s += (float)i / j;
    printf("%.2f\n", s);
    return 0;
}