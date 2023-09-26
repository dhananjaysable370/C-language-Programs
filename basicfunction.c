#include<stdio.h>
int sum(int a,int b){
	return a + b;
}
int main(){
	int a = 44,b = 54,c;
	c = sum(a,b);
	printf("%d",c);
	return 0;
}
