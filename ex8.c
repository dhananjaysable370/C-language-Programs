#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<float.h>
#include<limits.h>
#include<wctype.h>
void main()
{
    int arr[]={1,2,3,4,5,6,67};
    int* arrayptr = arr;
    //Address :-
    printf("The Address of First Element of the Array is : %d\n",&arr[0]);
    printf("The Address of First Element of the Array is : %d\n",arr[0]);
    printf("The Address of Second Element of the Array is : %d \n",&arr[1]);
    printf("The Address of Third Element of the Array is : %d \n",&arr[2]);
    printf("The Address of Second Element of the Array is : %d \n",arr+1);
    printf("The Address of Third Element of the Array is : %d \n",arr+2);
    arrayptr++;
    //Value :-
    printf("The Value at Address of First Element of the Array is : %d\n",*(&arr[0]));
    printf("The Value at Address of First Element of the Array is : %d\n",*(arr));
    printf("The Value at Address of First Element of the Array is : %d \n",*(&arr[1]));
    printf("The Value at Address of First Element of the Array is : %d \n",*(arr+1));
    arrayptr++;
}