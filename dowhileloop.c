#include<stdio.h>
void main(){
	int a,b=0;
	printf("Enter a Number : ");
	scanf("%d",&a);
	do{
		printf("%d\n",b+1);
		b=b+1;
	}while(b<a);
}
