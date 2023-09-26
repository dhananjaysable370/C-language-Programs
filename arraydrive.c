#include <stdio.h>
void main()
{
    int age, license;
    printf("Enter Your Ege : ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Do You Have Driving License : ");
        scanf("%d", &license);
        if (license == 1)
        {
            printf("You Can Drive Safely...");
        }
        else
        {
            printf("You Cannot Drive a Car Because You Do Not have Driving License.!");
        }
    }
    else
    {
        printf("Sorry You Cannot Drive a Car.!");
    }
}