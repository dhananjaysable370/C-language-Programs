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
    int n, i, s;
    printf("Enter Value Of N : ");
    scanf("%d", &n);
    s = 0;
    i = 1;
    while (i <= n)
    {
        s = s + i;
        i = i + 1;
    }
    printf("Sum = %d", s);
}