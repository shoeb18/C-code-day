//? question 21:
//* create an array of size 5 and store 5 student marks and display it (note: use loops)

#include <stdio.h>

int main(){

    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d : ", (i + 1));
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student %d is : %d\n ", (i + 1), marks[i]);
    }
    
    return 0;
}