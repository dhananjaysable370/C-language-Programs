#include <stdio.h>
void main()
{
    int num = 0;
    int i;
    printf("Enter Number : ");
    scanf("%d", &num);
    do
    {
        printf("%d\n", i + 1);
        i++;
    } while (num > i);
}