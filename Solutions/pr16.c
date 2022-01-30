
//? question 16:
//* Write a program using functions to print the following pattern ( for user input n value )
//  if n = 3;
// *
// ***
// *****


#include <stdio.h>

void pattern1(){

    int pattern;

    printf("Enter the pattern line no:");
    scanf("%d", &pattern);

    for (int i = 0; i < pattern; i++)
    {
        for (int v = 0; v < (2 * i +1); v++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main(){

    pattern1();

    return 0;
}