// Call By Reference Example
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a = 34, b = 74;
    printf("Before Swap Function : \na = %d\nb = %d\n", a, b);
    // Call By Reference :-
    swap(&a, &b);
    printf("After Swap Function : \na = %d\nb = %d\n", a, b);
    return 0;
}