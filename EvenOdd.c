#include <stdio.h>

void main()
{
    int input;
    printf("Enter Number to Check Even OR Odd : ");
    scanf("%d", &input);
    if (input % 2 == 0)
    {
        printf("The Number is Even.");
    }
    else
    {
        printf("The Number is Odd.");
    }
}