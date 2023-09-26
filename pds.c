#include<stdio.h>
#include<conio.h>
int main(){
	int age,L;
	printf( "Enter your age : ");
	scanf("%d",&age);
	if (age >= 18)
	{
		printf("Do you have licence? : ");
		scanf("%d",&L);
		printf("Your Eligible!");
		if(L == 1)
		{
			printf (" You can drive safely.");
		}
		else {
			printf (" but you cannot drive a car.") ;
		}
	}
	else{ 
	printf("Sorry you can not drive.");
	return 0;
	}
	}
