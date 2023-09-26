#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <float.h>
#include <limits.h>
#include <wctype.h>
void main()
{
    // To Find Sum Of Series
    int x, n, c, s;
    printf("Enter Value of X and N : ");
    scanf("%d %d", &x, &n);
    s = 1;
    c = 1;
abc:
    s = s + pow(x, c);
    c = c + 1;
    if (c <= n)
        goto abc;
    printf("Sum Of Series = %d", s);
}