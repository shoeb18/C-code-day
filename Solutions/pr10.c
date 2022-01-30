//? question 10:
//* make a program to print user input number multiplication table
//* from 1 to 10

#include <stdio.h>

int main(){

    int Number;

    printf("Enter the number : ");
    scanf("%d",&Number);

    for (int i = 1; i <= 10; i++)
    {
        printf(" %d x %d = %d\n", Number, i, (Number * i));
    }
    
    
    return 0;
}