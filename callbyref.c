#include<stdio.h>
void changeValue(int* address){
    *address=355;
}
void main()
{
    int a=34,b=74;
    printf("The Value of A is Now %d\n",a);
    changeValue(&a);
    printf("The Value of A is Now %d\n",a);
}