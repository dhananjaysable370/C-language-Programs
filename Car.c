#include <stdio.h>
int main(){
	int person;
	printf("Enter Your Ege : ");
	scanf("%d",&person);
	if(person >= 18){
		printf("Congratulations..! You Can Drive a Car...");
	}
	else{
		printf("Sorry! You Cannot Drive a Car..!");
	}
	return 0;
}
