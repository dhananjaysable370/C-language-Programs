#include<stdio.h>
int sum(int a, int b);
void star(int n){
	char i;
	for(i=0;i<n;i++){
		printf("%c",'*');
	}
	//printf("%c",'*');
}
int main(){
	int a,b,c;
	a=99;
	b=34;
	c=sum(a,b);
	printf("%d",c);
	star(5);
	return 0;
}
int sum(int a,int b){
	return a + b;
}
