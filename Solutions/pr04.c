#include <stdio.h>

//? question 4:
//* make a program to get user input value and calculate triangle area
// formula = (height * base)/2


int main(){

    int height;
    int base;

    printf("Enter the value of height : ");
    scanf("%d", &height);
    printf("Enter the value of base : ");
    scanf("%d", &base);

    printf("The area of triangale %d :", (height * base) / 2);

    return 0;
}