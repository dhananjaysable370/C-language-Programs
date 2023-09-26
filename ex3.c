#include<stdio.h>
void main()
{
    //Write a C Program to find Simple Interest.
    float p,n,r,si;
    printf("Input Values of p,n and r : ");
    scanf("%f %f %f",&p,&n,&r);
    si=p*n*r/100;
    printf("Simple Interest = %f",si);
    
}