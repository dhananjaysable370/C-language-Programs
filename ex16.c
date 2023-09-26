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
    //To Print Result
    int python,java,math;
    printf("Enter Marks of Python, Java and Math : ");
    scanf("%d %d %d",&python,&java,&math);
    if(python>=50&&java<=50&&math<=50)
    printf("Result : Pass");
    else if(python<50&&java>=50&&math>=50)
    printf("Result : Repeat Python");
    else if(python>=50&&java<50&&math>=50)
    printf("Result :- Repeat java");
    else if(python>=50&&java>=50&&math<50)
    printf("Result :- Repeat Maths");
    else{
        printf("Result : Fail");
    }
}