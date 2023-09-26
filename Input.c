#include <stdio.h>
#include <conio.h>
int main(){
	int a,b,equal,multiple,subtract,division;
	printf("Please Enter Number :");
	scanf("%d%d",&a,&b);
	equal = a + b;
	multiple = a * b;
	subtract = a - b;
	division = a / b; 
	printf(" The equal value is : %d \n The multiple value is : %d \n The subtract value is : %d \n The division value is : %d \n" ,equal,multiple,subtract,division);
	return 0;
}

