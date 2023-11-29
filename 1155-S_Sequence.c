// problem 1155 S Sequence

#include <stdio.h>
int main()
{
    float s = 0;
    for (int i = 1; i <= 100; i++)
        s += (float)1 / i;
    printf("%.2f\n", s);
    return 0;
}