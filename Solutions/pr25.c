//? question 25: 
//* Make a program to get user input full name and display it 

#include <stdio.h>

int main(){

    char name[34];

    printf("Enter your full name : ");
    // scanf("%s",name);
    gets(name);

    printf("Your name is : %s\n", name);

    return 0;
}