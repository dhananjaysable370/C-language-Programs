#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char favChar;
    char name[50];
};
void main()
{
    struct student tejas, nikhil, vaibhav, shubham;
    tejas.id = 1;
    nikhil.id = 2;
    vaibhav.id = 3;
    shubham.id = 4;
    tejas.marks = 552;
    nikhil.marks = 545;
    vaibhav.marks = 546;
    shubham.marks = 558;
    tejas.favChar = '*';
    nikhil.favChar = '&';
    vaibhav.favChar = '-';
    shubham.favChar = '$';

    strcpy(tejas.name, "Tejas Kathe");
    strcpy(nikhil.name, "Nikhil Sable");
    strcpy(vaibhav.name, "Vaibhav Rathod");
    strcpy(shubham.name, "Shubham Gharde");
    printf("\n\n*******************************************************\n\n");

    // Tejas Kathe
    printf("Tejas ID is : %d\n", tejas.id);
    printf("Tejas Name is : %s\n", tejas.name);
    printf("Tejas Marks is : %d\n", tejas.marks);
    printf("Tejas Fav. Character is : %c", tejas.favChar);
    printf("\n\n*******************************************************\n\n");

    // Nikhil Sable
    printf("Nikhil ID is : %d\n", nikhil.id);
    printf("Nikhil Name is : %s\n", nikhil.name);
    printf("Nikhil Marks is : %d\n", nikhil.marks);
    printf("Nikhil Fav. Character is : %c", nikhil.favChar);
    printf("\n\n*******************************************************\n\n");

    // Vaibhav Rathod
    printf("Vaibhav ID is : %d\n", vaibhav.id);
    printf("Vaibhav Name is : %s\n", vaibhav.name);
    printf("Vaibhav Marks is : %d\n", vaibhav.marks);
    printf("Vaibhav Fav. Character is : %c", vaibhav.favChar);
    printf("\n\n*******************************************************\n\n");

    // Shubham Gharde
    printf("Shubham ID is : %d\n", shubham.id);
    printf("Shubham Name is : %s\n", shubham.name);
    printf("Shubham Marks is : %d\n", shubham.marks);
    printf("Shubham Fav. Character is : %c", shubham.favChar);
    printf("\n\n*******************************************************\n\n");
}