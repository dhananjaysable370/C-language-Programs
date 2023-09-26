#include <stdio.h>
#include <conio.h>
void main(){
	int a,v;
	printf("Enter Your Ege : ");
	scanf("%d",&a);
	
	if(a >= 18){
		printf("Do You have Voter id Card : ");
		scanf("%d",&v);
		printf("You Can Vote...");
		
		if(v == 1){
			printf("");
		}
		else{
			printf(" but have not voter id card so you cannot vote.");
		}
	}
	else{
		printf("You Cannot Vote!");
	}
}
