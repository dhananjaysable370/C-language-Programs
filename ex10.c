#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<float.h>
#include<limits.h>
#include<wctype.h>
void main()
{
    int n,d1,d2,d3,d4,s;
    printf("Input Any Four Digit Number : ");
    scanf("%d",&n);
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;
    s=d1*1000+d2*100+d3*10+d4;
    printf("Reverse Number = %d",s);
}