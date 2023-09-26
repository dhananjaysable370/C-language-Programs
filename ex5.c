#include<stdio.h>
#define pi 3.14
void main()
{
    //Write a C Program to find Area of circle. P
    float r,area;
    printf("Input Radius : ");
    scanf("%f",&r);
    area=pi*r*r;
    printf("Area Of Circle = %f",area);
}