#include<stdio.h>
void star(int n){
	char i;
	for(i=0;i<n;i++){
		printf("%c",'*');
	}
}
int main(){
	star(22);
}
