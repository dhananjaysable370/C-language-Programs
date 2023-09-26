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
    int x, y, result;
    char op;
    printf("Enter X, Y and One Operator : ");
    scanf("%d %d %c", &x, &y, &op);
    switch (op)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        result = x / y;
        break;
    }
    printf("Result = %d", result);
}