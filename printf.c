#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void main()
{
    int a,b,c;
    printf("Input Number a and b : ");
    scanf("%d %d",&a,&b);
    c = a>b ? a:b;
    printf("Greater Number is = %d",c);
}