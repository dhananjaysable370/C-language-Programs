#include <stdio.h>
int main(){
	char FirstName,LastName,FullName,result;
	printf("Enter First Name : ");
	scanf("%c",&FirstName);
	printf("Enter Last Name : ");
	scanf("%c",&LastName);
	FullName = FirstName + LastName;
	printf("Your Full Name is : %c");
	return 0;
}
