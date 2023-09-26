#include<stdio.h>
void main()
{
    int input1,input2,max;
    printf("Enter First Number : ");
    scanf("%d",&input1);
    printf("Enter Second Number : ");
    scanf("%d",&input2);
    max = (input1 > input2) ? input1 : input2;
    printf("Largest Number is %d",max);
}   