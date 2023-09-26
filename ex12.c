#include <stdio.h>
void main()
{
    int a, b, c, d, e, g;
    printf("Input Value of a,b,c,d and e : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (g < a)
        g = a;
    if (g < b)
        g = b;
    if (g < c)
        g = c;
    if (g < d)
        g = d;
    if (g < e)
        g = e;
    printf("Greatest Number = %d", g);
}