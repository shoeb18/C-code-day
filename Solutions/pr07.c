//? question 7:
//* make a program to print week days as per user input number
//* like input 1 to print "Sunday" and so on....



#include <stdio.h>

int main(){

    int day;
    printf("Enter the day number : ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    
    default:
        printf("invalid input!\n");
        break;
    }

    return 0;
}