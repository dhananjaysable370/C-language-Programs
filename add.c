#include <stdio.h>
int main()
{
    int english,math,result;
    printf("Enter English Total Marks : ");
    scanf("%d",&english);
    printf("Enter Math Total Marks : ");
    scanf("%d",&math);
    result = english % math * 100;
    return 0;
}
