#include <stdio.h>
int main(){
	char d;
	printf("Enter Your Grade : ");
	scanf("%c",&d);
	switch (d){
		case 'A':
			printf("Congratulation! Your Grade is Awesome...");
			break;
		case 'B':
			printf("Great! but You Can Do Better!");
			break;
		case 'C':
			printf("You have to Work Hard!");
			break;
		case 'D':
			printf("Sorry! You are failed in Examination.");
			break;
		default:
			printf("Incorrect Grade...! (Please Use Uppercase!!!)");
			break;
	}
	return 0;
}
