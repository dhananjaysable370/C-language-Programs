#include <stdio.h>

void main()
{
    float percentage;
    int max_Marks, obt_Marks;
    printf("Enter Max Marks : ");
    scanf("%d", &max_Marks);
    printf("Enter Obtained Marks : ");
    scanf("%d", &obt_Marks);

    if (max_Marks >= obt_Marks)
    {
        percentage = (float)obt_Marks / max_Marks * 100;
        printf("Your Percentage is %.2f%%", percentage);
    }
    else
    {
        printf("Obtained Marks is incorrect.!");
    }
}