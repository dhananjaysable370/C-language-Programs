#include <stdio.h>
int main(){
	int nFirst, nSecond;
char sInput[10];
printf("Which variable to change to 10?");
scanf("%s", &sInput);
// BAD - inflexible and unmaintainable
if(strcmp(sInput,"nFirst") ==0){
    nFirst = 10;
}
else if (strcmp(sInput,"nSecond")==0) {
    nSecond =10;
}
}
