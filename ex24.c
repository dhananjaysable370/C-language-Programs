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
    // To Find Sum Of Series
    int x,n,i,s,f;
    printf("Input Value of x and n : ");
    scanf("%d %d",&x,&n);
    s=1;
    f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
        s=s+pow(x,i)/f;
    }
    printf("Sum of Series = %d",s);
    int rays;
}