#include <stdio.h>
int main()
{
    int totalmarks,outoff,result;
    printf("Enter Total Marks : ");
    scanf("%d",&totalmarks);
    printf("Enter Outoff Marks : ");
    scanf("%d",&outoff);
    result = (totalmarks/outoff*100);
    printf("Your Percentage is : ",result);
    return 0;
}
