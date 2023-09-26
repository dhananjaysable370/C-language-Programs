#include<stdio.h>
char getString(char str[]){
    int i;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
void main()
{
    char str[35];
    gets(str);
    printf("Using printf %s\n",str);
    getString(str);
    printf("Using puts : \n");
    
}