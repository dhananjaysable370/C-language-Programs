#include <stdio.h>
#include <conio.h>
int main(){
	char a;
	printf("Enter Grade :");
	scanf("%c",&a);
	switch(a){
		case 'A':
			printf("Great! Your Grade is Awesome.");
			break;
		case 'B':
			printf("You Can Do Better..!");
			break;
		case 'C':
			printf("You have to work hard!");
			break;
		case 'D':
			printf("Sorry! You are Failed in Examination.");
			break;
		default :
			printf("incorrect grade!!!");
			break;
	}
	return 0;
}
