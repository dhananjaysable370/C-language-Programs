#include <stdio.h>
void main()
{
    int num = 0;
    printf("Enter Number : ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d\n", i + 1);
    }
}