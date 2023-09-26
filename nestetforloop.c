#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1&&j==3){
				break;
			}
			printf("%d%d\n",i,j);
		}
	}
	return 0;
}
