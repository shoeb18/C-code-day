//? question 11:
//* make a program to print user input number multiplication table in reverse order
//* from 10 to 1

#include <stdio.h>

int main(){

    int input;
    printf("Enter the number : ");
    scanf("%d", &input);

    for (int i = 10; i > 0;i--){
        printf(" %d X %d = %d\n", input, i, (input * i));
    }
        return 0;
}