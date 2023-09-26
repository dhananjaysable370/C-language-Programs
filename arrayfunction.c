#include <stdio.h>
int arrayfunction(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The Value at %d is %d\n", i, arr[i]);
    }
    arr[0] = 345;
}
void arrayfunction2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The Value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 4563;
}

void arrayfunction3(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The Value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[3][3] = {{23, 35, 32, 55}, {27, 59, 39, 65}};
    printf("The Value at Index 0 is %d\n", arr[0]);
    arrayfunction(arr);
    arrayfunction2(arr);
    printf("The Value at index 0 is %d\n", arr[0]);
    arrayfunction2(arr);
    arrayfunction2(arr);
    arrayfunction3(arr);
    return 0;
}