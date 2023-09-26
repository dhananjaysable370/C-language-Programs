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
    int n;
    printf("Input Value of n : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Given Number is Even");
    }
    else{
        printf("Given Number is Odd");
    }
}