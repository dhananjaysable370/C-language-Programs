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
    //To Find Sum of series
    int x,n,i,s;
    printf("Enter Value of X and N : ");
    scanf("%d %d",&x,&n);
    s=1;
    for(int i = 1;i<=n;i++){
        s=s+pow(x,i);
    }
    printf("Sum of Series = %d",s);
}