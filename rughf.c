#include <stdio.h>
#include <conio.h>

void Triangular_Pattern(int Row, int pattern);
int Choose_Pattern();

int main(int argc, char const *argv[])
{
    int num, Pattern;
   // while (1)
   //{
        printf("Enter the Row of Triangular You want to print: ");
        scanf("%d", &num);
        Pattern = Choose_Pattern();
        Triangular_Pattern(num, Pattern);
   //}
    getch();
    return 0;
}
int Choose_Pattern()
{
    int number;
    printf("-------> Select The Pattern You want to Display <-------\nEnter 0 for Triangular Pattern And 1 for Reverse Triangular Pattern: ");
    scanf("%d", &number);
    return number;
}
void Triangular_Pattern(int Row, int pattern)
{
    if (pattern == 1)
    {

        for (int i = 0; i < Row; i++)
        {

            for (int j = 0; j <= i; j++)
            {

                printf("*");
            }
            printf("\n");
        }
    }
    else if(pattern==0)
    {
        for (int i = 0; i < Row; i++)
        {

            for (int j = Row; j > i; j--)
            {

                printf("*");
            }
            printf("\n");
        }
    }
}