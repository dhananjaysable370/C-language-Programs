#include <stdio.h>
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void ReversestarPattern(int rows)
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
    printf("Press 2 => key to Exit\nEnter 0 For Star Pattern and 1 For Reversed Star Pattern :- ");
    scanf("%d", &type);
    if (type > 1)
    {
        goto end;
    }
    printf("How Many Rows Do You Want? :- ");
    scanf("%d", &rows);

    switch (type)
    {
    case 0:
        starPattern(rows);
        break;
    case 1:
        ReversestarPattern(rows);
        break;

    default:
        printf("Please Enter 0 For Star Pattern and 1 For Reversed Star Pattern :- ");
        break;
    }
end:
}