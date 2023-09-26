#include <stdio.h>
void main()
{
    int age, idcard;
    printf("Enter Your Ege : ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Do You have Voter Id Card? : ");
        scanf("%d", &idcard);
        if (idcard == 1)
        {
            printf("You Can Vote...");
        }
        else
        {
            printf("You Cannot Vote Because you don't have Voter Id Card!");
        }
    }
    else
    {
        printf("Sorry You Cannot Vote!");
    }
}