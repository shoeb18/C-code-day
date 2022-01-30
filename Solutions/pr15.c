
//? question 15:
//* Write a program using functions to find average of 5 user input numbers

#include <stdio.h>


float Average(int n1,int n2,int n3,int n4,int n5)
{
    float avg;
    avg = (n1 + n2 + n3 + n4 + n5) / 5.0;

    return avg;
}

int main(){

    int n1;
    int n2;
    int n3;
    int n4;
    int n5;

    printf("Enter the value of first number : ");
    scanf("%d", &n1);
    printf("Enter the value of second number : ");
    scanf("%d", &n2);
    printf("Enter the value of third number : ");
    scanf("%d", &n3);
    printf("Enter the value of forth number : ");
    scanf("%d", &n4);
    printf("Enter the value of fifth number : ");
    scanf("%d", &n5);

    float result = Average(n1, n2, n3, n4, n5);

    printf("The Average of five numbers is %f\n", result);
    return 0;
}