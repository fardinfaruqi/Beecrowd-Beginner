// Problem 1153 Simple Factorial

#include <stdio.h>
int main()
{
    int n, f = 1;
    scanf("%d", &n);
    while (n > 0)
    {
        f *= n;
        n--;
    }
    printf("%d\n", f);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int f = n;
//     while (--n)
//         f *= n;
//     printf("%d\n", f);
//     return 0;
// }