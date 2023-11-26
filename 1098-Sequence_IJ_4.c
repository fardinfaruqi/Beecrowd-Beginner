// Problem: 1098 Sequence IJ 4

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 20; i += 2)
    {
        for (int j = 10; j <= 30; j += 10)
        {
            if (i % 10 == 0)
                printf("I=%d J=%d\n", i/10, (i + j)/10);
            else
                printf("I=%.1f J=%.1f\n", i / 10.0, (i + j) / 10.0);
        }
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     for (float i = 0; i <= 2.1; i += 0.2)
//     {
//         for (float j = 1; j <= 3; j++)
//         {
//             if (i - (int)i == 0)
//                 printf("I=%.f J=%.f\n", i, i + j);
//             else
//                 printf("I=%.1f J=%.1f\n", i, i + j);
//         }
//     }

//     return 0;
// }