#include <stdio.h>

void main()
{
    int a;
    printf("Enter The Number to Check even or odd : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d Number is Even.", a);
    }
    else
    {
        printf("%d Number is Odd", a);
    }
}