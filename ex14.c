#include <stdio.h>
void main()
{
    //To Find Power
    int x, y, c, p;
    printf("Input Value of X and Y : ");
    scanf("%d %d", &x, &y);
    p = 1;
    c = 1;
abc:
    p = p * x;
    c = c + 1;
    if (c <= y)
        goto abc;
    printf("Power = %d", p);
}