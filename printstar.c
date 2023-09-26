#include <stdio.h>

int main()
{
    int rows, column;
    printf("How many Rows You Want To Print : ");
    scanf("%d", &rows);
    printf("How Many Columns You Want to Print : ");
    scanf("%d", &column);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}