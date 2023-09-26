#include<stdio.h>
int main()
{
    char a = '3';
    char* pointer = &a;
    printf("%d\n",pointer);
    pointer--;
    printf("%d\n",pointer);
    printf("%d",pointer-2);
    return 0;
}