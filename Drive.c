#include <stdio.h>
int main(){
	int a;
	int l;
	printf("Enter Your Ege : ");
	scanf("%d",&a);
	printf("Do You have Driving License? : ");
	scanf("%d",&l);
	if(a >= 18){
		printf("Congratulation! You are eligible to Drive. \n");
		if (l == 1){
			printf("Great! You can Drive Safely.");
		}
		else{
			printf("You are eligible but you do not possesss a license.");
		}
		}
		else{
			printf("Sorry! You Cannot Drive a Car.");
		}
	return 0;
}
