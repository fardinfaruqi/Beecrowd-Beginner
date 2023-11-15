// problem 1049 Animal

#include <stdio.h>
#include <string.h>
int main()
{
    char a[15], b[15], c[15];
    scanf(" %s", &a);
    scanf(" %s", &b);
    scanf(" %s", &c);
    if (strcmp("vertebrado", a) == 0)
    {
        if (strcmp("ave", b) == 0)
        {
            if (strcmp("carnivoro", c) == 0)
            {
                printf("aguia\n");
            }
            if (strcmp("onivoro", c) == 0)
            {
                printf("pomba\n");
            }
        }
        if (strcmp("mamifero", b) == 0)
        {
            if (strcmp("onivoro", c) == 0)
            {
                printf("homem\n");
            }
            if (strcmp("herbivoro", c) == 0)
            {
                printf("vaca\n");
            }
        }
    }
    if (strcmp("invertebrado", a) == 0)
    {
        if (strcmp("inseto", b) == 0)
        {
            if (strcmp("hematofago", c) == 0)
            {
                printf("pulga\n");
            }
            if (strcmp("herbivoro", c) == 0)
            {
                printf("lagarta\n");
            }
        }
        if (strcmp("anelideo", b) == 0)
        {
            if (strcmp("hematofago", c) == 0)
            {
                printf("sanguessuga\n");
            }
            if (strcmp("onivoro", c) == 0)
            {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}