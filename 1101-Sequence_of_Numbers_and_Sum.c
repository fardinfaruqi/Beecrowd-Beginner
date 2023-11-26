// problem - 1101 Sequence of Numbers and Sum

#include <stdio.h>
int main()
{
    int m, n, s;
    while (1)
    {
        s = 0;
        scanf("%d%d", &m, &n);
        if (m <= 0 || n <= 0)
            return 0;
        if (m > n){
            int t = m;
            m = n;
            n = t;
        }
        for (int i = m; i <= n; i++){
            printf("%d ", i);
            s += i;
        }
        printf("Sum=%d\n", s);
    }
    return 0;
}