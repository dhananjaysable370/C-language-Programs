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
void welcome();
void main()
{
    char fname[20],lname[20];
    printf("Enter Your First Name :- ");
    scanf("%s",&fname);
    printf("Enter Your Last Name :- ");
    scanf("%s",&lname);
    printf("%s %s",fname,lname);
    welcome();
}
void welcome(){
    printf(" We are learning functions topic.");
}