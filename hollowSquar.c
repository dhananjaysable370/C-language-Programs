#include <stdio.h>
int main()
{
    int rows;
    printf("How Many Rows You Want to Print * : ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows || i == j || j == (rows - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}