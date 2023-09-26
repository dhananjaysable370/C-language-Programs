#include <stdio.h>

void main()
{
    int n, factorial = 1;
    printf("Enter Number for Factorial : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The Value of Factorial %d is %d", n, factorial);
}