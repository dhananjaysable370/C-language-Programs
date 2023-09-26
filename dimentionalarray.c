#include <stdio.h>

void main()
{
    int a[10] = {33, 44, 55, 66, 77, 88, 33, 22, 11, 42};
    int temp, i, j;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Printing Sorted Elements List...\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
}