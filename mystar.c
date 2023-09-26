#include <stdio.h>
void reverseStarPrint(int rows)
{
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void starPrint(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void main()
{
    int rows, type;
    printf("How  many Rows You Want : ");
    scanf("%d", &rows);
    printf("0 For Star Print and 1 For Reverse Star Print : ");
    scanf("%d", &type);
    if (type > 1)
    {
        goto end;
    }
    switch (type)
    {
    case 0:
        starPrint(rows);
        break;
    case 1:
        reverseStarPrint(rows);
        break;

    default:
        break;
    }
end:
    printf("You Entered Wrong Choice!");
}