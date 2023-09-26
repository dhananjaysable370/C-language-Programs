#include <stdio.h>
int swap(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
    printf("After swap a and b value is %d, %d\n", a, b);
}
void main()
{
    int a = 8, b = 10;
    printf("Before a and b value %d, %d\n", a, b);
    printf("After Swap a and value is b value %d, %d\n", a, b);
    swap(a, b);
}