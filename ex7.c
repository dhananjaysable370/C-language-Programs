#include<stdio.h>
void main()
{
    //Write a C Program to find Area of Triangle.
    float a,b,c,s,area;
    printf("Input three sides a,b and c : ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle = %f",area);
}