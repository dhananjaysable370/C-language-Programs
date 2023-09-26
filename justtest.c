#include <stdio.h>
int main(){
	int tejas,License;
	//License = 1;
	printf("Enter Your Ege : ");
	scanf("%d",&tejas);
	printf("Do You have Driving License? : ");
	scanf("%d",&License);
	if(tejas >= 18){
		printf("Congratulation! You Can Drive a Car. \n");
		if(License = 1){
			printf("Great! You Can Drive Safely. \n");
		}
		else{
			printf("You are eligible but you Cannot Drive a Car.");
		}
	}
	else{
		printf("Sorry! You Cannot Drive a Car.");
	}
	return 0;
}

