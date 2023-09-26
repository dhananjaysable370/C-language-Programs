#include<stdio.h>
int main()
{
    //Write a C Program Multiplication of three Numbers x,y and z.
    int x,y,z,m;
    printf("Input Values of x,y and z : ");
    scanf("%d %d %d",&x,&y,&z);
    m=x*y*z;
    printf("Multiplication = %d",m);
    return 0;
}