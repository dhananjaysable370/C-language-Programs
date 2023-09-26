#include<stdio.h>
#include<conio.h>
void main(){
	int i = 1;
	count:
		printf("%d\n",i);
		i++;
		if(i<=10){
			goto count;
		}
}
