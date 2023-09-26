#include<stdio.h>
int main(){
	int num;
	do{
		printf("Enter Number : ");
		scanf("%d",&num);
		printf("Your Number is : %d\n",num);
	}
	while(num < 10);
	return 0;
}
