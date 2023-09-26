#include <stdio.h>
void main()
{
    int arr[100], i, n, largest, secondLargest;
    printf("Enter The Size Of The Array : ");
    scanf("%d", &n);
    printf("Enter the Element of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    secondLargest = arr[1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    printf("Largest = %d\nSecond Largest = %d\n", largest, secondLargest);
}