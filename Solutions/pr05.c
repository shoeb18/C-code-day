//? question 5:
//* make a program to get user input year and check its leap or not

#include <stdio.h>

int main(){

    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if(year%4==0){
        printf("%d is leap year\n", year);
    }
    else{

        printf("%d is leap not a year\n", year);
    }
    return 0;
}