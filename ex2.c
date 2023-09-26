#include<stdio.h>
void main()
{
    //Write a C Program for Temperature conversion.
    float c,f;
    printf("Input temp. in c : ");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("Temp.in f = %f",f);
}