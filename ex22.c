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
    int x, y, i, p;
    printf("Enter Value of X and Y : ");
    scanf("%d %d", &x, &y);
    p = 1;
    for (int i = 1; i <= y; i++)
    {
        p = p * x;
    }
    printf("Power = %d", p);
}