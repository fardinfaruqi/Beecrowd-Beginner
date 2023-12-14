// Problem 1181 - Line in Array

#include <stdio.h>
int main()
{
    int l;
    char c;
    scanf("%d %c", &l, &c);
    double m, s = 0.0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m);
            if (i == l)
                s += m;
        }
    }
    if (c == 'S')
        printf("%.1lf\n", s);
    if (c == 'M')
        printf("%.1lf\n", s / 12);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int l;
//     char c;
//     scanf("%d %c", &l, &c);
//     double m[12][12], s = 0.0;
//     for (int i = 0; i < 12; i++)
//     {
//         for (int j = 0; j < 12; j++)
//         {
//             scanf("%lf", &m[i][j]);
//             if (i == l)
//                 s += m[i][j];
//         }
//     }
//     if (c == 'S')
//         printf("%.1lf\n", s);
//     if (c == 'M')
//         printf("%.1lf\n", s / 12);
//     return 0;
// }