#include <stdio.h>
#include <conio.h>
int main()
{
	char a;
	printf("Grade : ");
	scanf("%c", &a);
	switch (a)
	{
	case 'A':
		printf("Congratulation! Your Grade is Awesome..");
		break;

	case 'B':
		printf("Your Grade is Good. But You Can Do Better");
		break;

	case 'C':
		printf("You have to work hard");
		break;

	case 'D':
		printf("Sorry! You are Failed in Examination");
		break;

	default:
		printf("You are entered wrong grade");
		break;
	}
	return 0;
}
