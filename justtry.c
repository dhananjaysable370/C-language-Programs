#include <stdio.h>
int main(){
	int a,l;
	printf("Enter your Ege : %d");
	scanf("%d",&a);
	if(a >= 18){
		printf("You Can Drive a Car");
		printf("Do You have Driving License? :");
		scanf("%d",&l);
		if(l == 1){
			printf("Congratulation! You Can Drive Safely");
		}
		else{
			printf("You are not eligible for driving");
		}
	}
	else{
		printf("sorry! you cannot drive a car.");
	
	}	//return 0;
}
