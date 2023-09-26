#include <stdio.h>

void main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    for (int i = num; i; i--)
    {
        printf("%d\n", i);
    }
}