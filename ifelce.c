#include <stdio.h>
int main(){
    int person;
    printf("Enter Your Ege : ");
    scanf("%d",&person);
    if (person >= 17)
    {
        printf("You Can Drive a Car...");
    }
    if(person <= 35){
    	printf("You Cannot Drive a Car!");
	}
    else{
        printf("You Cannot Drive a Car!");
    }
    return 0;
}
