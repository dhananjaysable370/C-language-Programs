#include <stdio.h>
void average(int, int, int, int, int);
void main()
{
    int a, b, c, d, e;
    printf("\n going to calculate average of five numbers: ");
    printf("\n enter five numbers : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    average(a, b, c, d, e);
}
void average(int a, int b, int c, int d, int e)
{
    float avg;
    avg = (a + b + c + d + e) / 5;
    printf("the average of given five numbers : %f", avg);
}