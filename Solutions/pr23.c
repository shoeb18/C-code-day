//? question 23:
//* Write a program containing function which counts the number of negetive integers in an array

#include <stdio.h>


int CountNegative(int array[] ,int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(array[i] < 0)
        {
            count++;
        }
    }

    return count;
}

int main(){

    int array[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d number: ",(i+1));
        scanf("%d", &array[i]);
    }

    int total = CountNegative(array, 10);
    printf("The total negative numbers in array is %d \n", total);

    return 0;
}