#include <stdio.h>
/* #include <conio.h> */
int main()
{
	int a, b, addition, multiple, division, substraction;
	printf("Please enter First and Second Value :");
	scanf("%d%d", &a, &b);
	addition = a + b;
	multiple = a * b;
	division = a / b;
	substraction = a - b;
	printf(" The Addition of the Number is : %d \n The Multiple of the Number is : %d \n The division is :%d \n The Substraction is : %d \n", addition, multiple, division, substraction);
	return 0;
}
