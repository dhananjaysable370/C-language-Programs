#include<stdio.h>
int main(){
	int marks[4];
	int i;
	for (i=0;i<4;i++){
		printf("Enter the value of %d element of the array : ",i);
		scanf("%d",&marks[i]);
	}
	for(i = 0;i<4;i++){
		printf("The value of %d element of the array is %d\n",i,marks[i]);
	}
	//marks[0]=34;
	//printf("Marks of Student 1 is %d\n",marks[0]);
}
