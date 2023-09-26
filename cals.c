#include <stdio.h>
int main(){
	int calc,cals;
	printf("Enter a Number : ");
	scanf("%d",&cals,&calc);
	
	if(calc + cals){
		printf("Addition is : ",calc + cals);
	}
	else{
		printf("");
	}
	printf("Enter a Number : ");
	scanf("%d",&calc,&cals);
	if(calc - cals){
		printf("Substraction is : ",calc - cals);
	}
	return 0;
}
