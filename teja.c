#include<stdio.h>
int sum ();
void main(){
    printf("going to calculate to area of the square \n");
    float area=square();
    printf("the area of square :%f\n",area);

}
int square (){

    float side ;
    printf("enter the lenth of side in meters :");
    scanf("%f",&side);
    return side * side ;n
}