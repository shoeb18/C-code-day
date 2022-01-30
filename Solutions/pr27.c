//? question 27:
//* Make a program to copy 1 string into another string then display it

#include <stdio.h>
#include <string.h>

int main(){

    char vishal[] = "I am vishal";
    char shoeb[20];

    strcpy(shoeb, vishal);

    printf("%s", shoeb);

    return 0;
}