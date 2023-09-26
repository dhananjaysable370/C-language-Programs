#include <stdio.h>
void starPattern()
{
    int rows;
    printf("How many Rows You Want : ");
    scanf("%d", &rows);
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void ReverseStarPattern()
{
    int rows;
    printf("How many Rows You Want : ");
    scanf("%d", &rows);
    for (int i = 0; i <= rows; i++)
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
    int type;
    printf("0 for Forward Star Pattern and 1 for Reverse Star Pattern : ");
    scanf("%d", &type);
    if (type > 1)
    {
        goto end;
    }

    switch (type)
    {
    case 0:
        starPattern();
        break;

    case 1:
        ReverseStarPattern();
        break;

    default:
        break;
    }
end:
}