// problem - 1061 Event Time

#include <stdio.h>
struct time
{
    char t[4], x, y;
    int d, h, m, s;
} t1, t2;
int main()
{
    int d, h, m, s;
    scanf(" %s %d%d %c%d %c%d %s %d%d %c%d %c%d", &t1.t, &t1.d, &t1.h, &t1.x, &t1.m, &t1.y, &t1.s, &t2.t, &t2.d, &t2.h, &t2.x, &t2.m, &t2.y, &t2.s);
    s = t2.d * 86400 + t2.h * 3600 + t2.m * 60 + t2.s - t1.d * 86400 - t1.h * 3600 - t1.m * 60 - t1.s;
    d = s / 86400;
    h = (s % 86400) / 3600;
    m = ((s % 86400) % 3600) / 60;
    s = (((s % 86400) % 3600) % 60);
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
    return 0;
}