#include<stdio.h>
void main()
{
    //Write a C Program to find Greater Number between x and y.
    int x,y,g;
    printf("Input x and y : ");
    scanf("%d %d",&x,&y);
    g=x>y?x:y;
    printf("Greater Number = %d",g);
}