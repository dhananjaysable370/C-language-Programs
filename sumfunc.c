#include<stdio.h>

int sum();
void main()
{
    printf("We are going to sum of 2 numbers : \n");
    sum();
}
int sum(){
    int a,b;
    printf("Enter two Number you want sum : ");
    scanf("%d %d",&a,&b);
    printf("The sum is : %d",a+b);
    return a+b;
}