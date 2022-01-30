//? question 19:
//* make pointer variable and store address of a variable use this address to get the value of this variable

#include <stdio.h>

int main(){

    int a = 10;
    int *ptr = &a;

    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    printf("The value at address of a is %u\n", *ptr);
    return 0;
}