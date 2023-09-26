#include <stdio.h>
void main()
{
    float percentage;
    int maxMarks, obtMarks;
    printf("Enter Maximum Marks : ");
    scanf("%d", &maxMarks);
    printf("Enter Obtained Marks : ");
    scanf("%d", &obtMarks);
    if (maxMarks >= obtMarks)
    {
        percentage = (float)obtMarks / maxMarks * 100;
        printf("Your Percentage is %.2f%%", percentage);
    }
    else
    {
        printf("Obtained Marks is incorrect.!");
    }
}
